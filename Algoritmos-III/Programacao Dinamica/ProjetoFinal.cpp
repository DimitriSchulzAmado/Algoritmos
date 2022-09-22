#include <iostream>
#include <cmath>
#include <climits>
#include <list>

using namespace std;

int pd[100][100];      // valor maximo sendo:
                       // olhando do item 'i'->final
                       // olhando uma mochila de capacidade 'j'
int caminho[100][100]; // utilizado para recuperar quais itens foram escolhidos; [0 -> nao pegar o item; 1 -> pegar o item]
int custo_total;       // guarda o custo total de cada motoboy

// struct para auxiliar a função dijkstra
struct no
{
    int v;    // vertice de destino da aresta
    int peso; // peso da aresta
};
// struct de vetor das compras
struct item
{
    int num_compra; // numero da compra
    int peso;       // peso da compra
    bool pego;      // verifica se esse item já foi pego
};
// struct de vetor das informações de cada motoboy
struct motoboy
{
    int num_moto;     // numero motoboy
    int compras[100]; // compras que ele está levando
    int n_compras;    // numero de compras de cada motoboy
    int dist_mercado; // distancia inicial que ele se encontra do mercado
};
// ordena o vetor de struct motoboy em relação a sua distância ao mercado
void insercaoDireta(motoboy vetor[], int tamanho)
{
    int i, j; // contadores
    motoboy chave;
    for (j = 1; j < tamanho; j++)
    {
        chave = vetor[j];
        i = j - 1;
        while ((i >= 0) && (vetor[i].dist_mercado > chave.dist_mercado))
        {
            vetor[i + 1] = vetor[i];
            i = i - 1;
        }
        vetor[i + 1] = chave;
    }
}
// chamando a mochila; n = número de compras, k = qual motoboy estou distribuindo a carga;
void mochila(motoboy moto[], item v[], int capacidade, int n, int k)
{
    int i, j;  // var. contadora
    int x = 1; // var. aux

    for (i = n - 1; i >= 0; i--)
        for (j = 1; j <= capacidade; j++)
        {
            int pega, npega; // val. para caso eu pegar ou nao pegar o item 'i'

            npega = pd[i + 1][j]; // olhar o proximo item, mantendo a capacidade 'j'

            if (j >= v[i].peso && v[i].pego == false) // se eu tiver capacidade disponivel p/ pegar o item 'i' e se ele ainda não foi pego0
                pega = pd[i + 1][j - v[i].peso] + v[i].peso;
            // olho o proximo item, subtraio o peso da capacidade
            // disponivel, e somo o valor do item 'i'
            else
                pega = 0; // se nao posso pegar, o valor eh 0

            if (pega > npega) // se valer a pena pegar
            {
                pd[i][j] = pega;
                caminho[i][j] = 1;
            }

            else // se valer a pena nao pegar
            {
                pd[i][j] = npega;
                caminho[i][j] = 0;
            }
        }

    // Comeca na posicao final
    i = 0;          // do item 0->final
    j = capacidade; // para uma mochila de capacidade max

    while (i != n)
    {                           // enquanto eu nao chegar no ultimo item
        if (caminho[i][j] == 0) // se nesse momento a melhor opcao foi nao pegar eu nao pego
            i++;                // avanÃ§o para o proximo i, mantendo a capacidade

        else // if(caminho[i][j] == 1) /// se nesse momento a melhor opcao for pegar, eu pego
        {
            moto[k].compras[x] = v[i].num_compra;
            moto[k].n_compras = x;
            x++;
            v[i].pego = true;
            j -= v[i].peso; // diminuo a capacidade disponivel
            i++;            // avanco para o proximo i
        }
    }
}
// n_moto = num. no motoboy analizado
void dijkstra(list<no>adj[], int nVertices, int start, int end, motoboy moto[], int n_moto)
{  //função auxiliar que fará o procedimento de dijkstra
    list<int> fila;  //fila auxiliar
    list<int> menor;  //fila auxiliar -> mostrar o menor caminho
    int destino;  //Destino do vértice
    int state[10];  //-1 -> não descoberto; 0-> descoberto)
    int pais[10];  //sem pais -> -1
    int distancia[10];  //distância de um vértice para outro
    int peso;  //peso da aresta
    int u, v, dist;  //auxs para mostrar os vértices e distancia
    list<no>::iterator q;  //iterador varredor da lista de adjacência

    for (u = 0; u < nVertices; u++){
        state[u] = -1;
        distancia[u] = INT_MAX;
        pais[u] = -1;
    }

    distancia[start] = 0;
    v = start;

    while (state[v] == -1){
        state[v] = 0;
        for (q = adj[v].begin(); q != adj[v].end(); q++){
            destino = q->v;
            peso = q->peso;

            if (distancia[destino] > (distancia[v] + peso)){
                distancia[destino] = distancia[v] + peso;
                pais[destino] = v;
            }
        }

        v = 0;
        dist = INT_MAX;

        for (u = 0; u < nVertices; u++){
            if (state[u] == -1 && dist > distancia[u]){
                dist = distancia[u];
                v = u;
            }
		}
    }

    // Mostrando o menor caminho e o seu custo
    menor.push_front(end);
    u = pais[end];
    while (u != start){
        menor.push_front(u);
        u = pais[u];
    }
    menor.push_front(u);
    
    cout << "Menor caminho para entregar a compra " << end + 1 << " do motoboy " << moto[n_moto].num_moto << ": ";
    while (!menor.empty()){  //varrendo lista auxiliar (menor) para mostrar todos os caminhos
        u = *menor.begin();
        cout << u + 1 << " ";
        menor.pop_front();
    }
    cout << endl;
    custo_total += distancia[end];
    cout << "Distancia: " << distancia[end] << " km" << endl;  //mostrar a distância final
}

// Função pra criar arestas
void cria_aresta(list<no> adj[], int u, int v, int p, int orientado)
{
    no aux; // var aux para inserir as arestas na lista de adjacências
    aux.v = v;
    aux.peso = p;
    adj[u].push_back(aux);
    if (orientado == 0)
    {
        aux.v = u;
        adj[v].push_back(aux);
    }
}

int main()
{
    // chamada das structs
    item v[100];       // vetor de itens
    motoboy moto[100]; // vetor de motoboys
    // variaveis do mochila
    int n;               // quantidade de compras
    int n_m;             // quantidade de motoqueiros
    int capacidade = 18; // capacidade total da mochila (18kg)
    int soma_peso = 0;   // soma o peso de todas as compras
    int aux;             // vars. auxs.
    int i, j;            // var cont

    // variaveis dijkstra
    int n_pts;         // num de casas + o supermercado (nVertices)
    int mercado;       // qual ponto o mercado está (start inicial)
    int u, t;          // vértices de origem e destino de uma aresta (caminho)
    int p;             // distância entre casa-casa e casa-mercado (peso)
    int orientado = 0; // indica se o grafo é orientado(0) ou não(1)

    // variaveis de lista do dijkstra
    list<no> adj[100];    // lista de adjacências
    list<no>::iterator q; // iterador para varrer a lista de adjacências

    for (i = 0; i < 100; i++)
        v[i].pego = false;

    // ENTRADA:

    cout << "Entre com a quantidade de compras" << endl;
    cin >> n;

    cout << "Entre com a quantidade de motoboys" << endl;
    cin >> n_m;

    for (i = 0; i < n_m; i++)
    {
        cout << "Entre com a distancia do motoboy " << i + 1 << " ao mercado" << endl;
        moto[i].num_moto = i + 1;
        cin >> moto[i].dist_mercado;
    }
    // ordenando os motoqueiros em relação a sua dist. do mercado em ordem crescente
    insercaoDireta(moto, n_m);

    // se o num de compras for menor que o num de motoqueiros ignoro os de maior distância ao mercado
    if (n < n_m)
        n_m = n;

    for (i = 0; i < n; i++)
    {
        cout << "Entre com o numero e peso da compra " << endl;
        cin >> v[i].num_compra >> v[i].peso;
        // OTIMIZAR PARA QUANDO A COMPRA PESAR MAIS DE 18KG
        soma_peso += v[i].peso;
    }

    aux = soma_peso / 18 * 1.0;
    if (soma_peso % 18 != 0) // ARREDONDAR PARA CIMA
        aux = aux + 1;

    // usaremos (n_m - aux) <= motoboys <= n_m, ou seja, fazer o calculo com n_m - aux motoqueiros até n_m motoqueiro
    // se aux > n_m, deve ser feito um novo cálculo para um ou mais motoboys retornarem ao supermercado e levarem a compra
    //
    //
    //
    //
    //

    // CASO GERAL (calculando a distribuição para (n_m - aux) motoboys)
    for (i = 0; i < aux; i++)
        mochila(moto, v, capacidade, n, i);

    for (i = 0; i < aux; i++)
    {
        cout << "Numero do motoboy: " << moto[i].num_moto << endl;
        cout << "Compras levadas por ele: " << endl;
        for (j = 1; j <= moto[i].n_compras; j++)
            cout << moto[i].compras[j] << " ";
        cout << endl;
    }

    // calculando as distâncias do entregador ao seu destino
    // Entrando com a pos inicial (mercado)
    // dijkstra
    n_pts = n + 1;
    cout << "Entre com a pos. do mercado " << endl;
    cin >> mercado;

    // colocando o vértice inicial(pos. mercado) no vetor moto.compra[] pra indicar que ele está saindo do mercado; objetivo: facilitar no dijkstra
    for (i = 0; i < aux; i++)
        moto[i].compras[0] = mercado;
    cout << endl;

    // Lendo aresta e inserindo no grafo
    // aux2 = n_pts * (n_pts - 1) / 2; // número máximo de vértices que um grafo pode ter
    for (i = 0; i < n_pts; i++)
        for (j = i + 1; j < n_pts; j++)
        {
            cout << "Entre com a distancia de ir da cidade " << i + 1 << " para a cidade " << j + 1 << endl;
            cin >> p;
            u = i;
            t = j;
            cria_aresta(adj, u, t, p, orientado);
        }

    // Mostrando o caminho mais curto num grafo dirigido ou não em tempo O(m + n*log(n)); m: arestas, n: vértices
    for (i = 0; i < aux; i++) // varia o num do motoboy
    {
        for (j = 0; j < moto[i].n_compras; j++)  // varia o num da compra que ele leva
            dijkstra(adj, n_pts, moto[i].compras[j] - 1, moto[i].compras[j + 1] - 1, moto, i);
        custo_total += moto[i].dist_mercado;
        cout << "Distancia total do motoboy " << moto[i].num_moto << " : " << custo_total << " km" << endl;
        custo_total = 0;
        cout << endl;
    }

    return 0; // somar custo total com distancia do mercado
} // MELHOR CAM 2 1 3 4 6

/*
5
4
10
9
9
3
1 7
2 5
3 10
4 9
6 4

5
1
5
7
4
9
14
6
8
11
8
10
10
12
4
8
*/