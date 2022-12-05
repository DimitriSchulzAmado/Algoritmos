#include <iostream>
#include <climits>
#include <list>
using namespace std;

struct no
{
    int v;    // vertice de destino da aresta
    int peso; // peso da aresta
};

void dijkstra(list<no> adj[], int nVertices, int start, int end)
{
    list<int> pilha;
    list<no>::iterator q; // iterador para varrer a lista de adjacência
    bool intree[10];      // Estado de cada linha do vetor da lista ADJ(-1: não descoberto, 0: descoberto)
    int distance[10];     // Distância de um vértice até o outro
    int destino;          // Destino do vértice
    int parent[10];       // Sem parents: -1
    int weight;           // Peso da aresta
    int custo = 0;        // Custo da árvore gerada
    int u, v;             // Vars aux para mostrar os vértices
    int dist;             // Var aux da distância
    int pai;              // Var aux para  

    for (u = 0; u < nVertices; u++)
    {
        intree[u] = false;
        distance[u] = INT_MAX;
        parent[u] = -1;
    }

    distance[start] = 0;
    v = start;

    while (intree[v] == false)
    {
        intree[v] = true;
        for (q = adj[v].begin(); q != adj[v].end(); q++)
        {
            destino = q->v;
            weight = q->peso;
            
            if (distance[destino] > distance[v]+weight)
            {
                distance[destino] = distance[v]+weight;
                parent[destino] = v;
            }
        }

        v = 0;
        dist = INT_MAX;

        for (u = 0; u < nVertices; u++)
            if (intree[u] == false && dist > distance[u])
            {
                dist = distance[u];
                v = u;
            }
    }

    // Somando o custo
    for (u = 1; u < nVertices; u++)
        custo += distance[u];

    // Gerando árvore geradora mínima
    pilha.push_front(end);
    pai = parent[end];

    cout << "Menor caminho: " << endl;
    while(!pilha.empty())
    {
        pilha.push_front(pai);
        pai = parent[pai];
        cout << parent[u] << " " << u << endl;
    }
    cout << "Custo: " << custo << endl;
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
    list<no> adj[1000];   // lista de adjacências
    int nVertices;        // numero de vértices do grafo
    int u, v;             // vértices de origem e destino de uma aresta
    int p;                // peso da aresta
    int s;                // Vértice inicial
    list<no>::iterator q; // iterador para varrer a lista de adjacências
    int orientado;        // MUDAR O ORIENTADO CASO O GRÁFICO SEJA ORIENTADO OU NÃO
    int end;              // Vértice de destino      

    // Lendo numero de vértices do grafo
    cin >> nVertices;

    // Verificar se é orientado ou não
    cin >> orientado;

    // Lendo o vértice inicial e final
    cin >> s >> end;

    // Lendo aresta e inserindo no grafo
    cin >> u >> v >> p;

    while (u != -1 && v != -1 && p != -1)
    {
        cria_aresta(adj, u, v, p, orientado);
        cin >> u >> v >> p;
    }

    // Mostrando a lista de adjacências e os vértices
    dijkstra(adj, nVertices, s, end);

    return 0;
}