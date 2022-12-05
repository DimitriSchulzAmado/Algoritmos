#include <iostream>
#include <list>
#include <climits>

using namespace std;

struct no
{
    int v;    // vertice de destino da aresta
    int peso; // peso da aresta
};

void ordenacao_topologica(int f[], int nVertices)
{
    int maior;
    int pos;

    for (int j = 0; j < nVertices; j++)
    {
        maior = -1;
        for (int i = 0; i < nVertices; i++)
            if (f[i] > maior)
            {
                maior = f[i];
                pos = i;
            }
        cout << pos << " ";
        f[pos] = -1;
    }
}

void dfs_visit(list<no> adj[], int u, int &tempo, int d[], int cor[], int pai[], int f[])
{
    int v;                // Aux para alocação dos vértices
    list<no>::iterator q; // iterador para varrer a lista de adjacências

    cor[u] = 0;
    tempo += 1;
    d[u] = tempo;

    for (q = adj[u].begin(); q != adj[u].end(); q++)
    {
        v = q->v;
        if (cor[v] == -1)
        {
            pai[v] = u;
            dfs_visit(adj, v, tempo, d, cor, pai, f);
        }
    }

    cor[u] = 1;
    tempo += 1;
    f[u] = tempo;
}

void dfs(list<no> adj[], int nVertices)
{
    int u;       // Var aux para alocação dos vértices
    int cor[10]; // -1: Branco, 0: Cinza, 1: Preto
    int pai[10]; // -1: Sem pai
    int d[10];
    int tempo;
    int f[10];

    for (u = 0; u < nVertices; u++)
    {
        cor[u] = -1;
        pai[u] = -1;
    }
    tempo = 0;
    for (u = 0; u < nVertices; u++)
        if (cor[u] == -1)
            dfs_visit(adj, u, tempo, d, cor, pai, f);

    ordenacao_topologica(f, nVertices);
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
    list<no> adj[10];     // lista de adjacências
    int nVertices;        // numero de vértices do grafo
    int u, v;             // vértices de origem e destino de uma aresta
    int p = 1;            // peso da aresta
    list<no>::iterator q; // iterador para varrer a lista de adjacências
    int orientado;        // MUDAR O ORIENTADO CASO O GRÁFICO SEJA ORIENTADO OU NÃO

    // Entrada de dados
    cin >> nVertices >> orientado;

    // Lendo aresta e inserindo no grafo
    cin >> u >> v;
    while (u != -1 && v != -1)
    {
        cria_aresta(adj, u, v, p, orientado);
        cin >> u >> v;
    }

    // Ordenação topológica
    dfs(adj, nVertices);

    return 0;
}