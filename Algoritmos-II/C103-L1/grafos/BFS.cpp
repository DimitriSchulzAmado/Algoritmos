/*
        LENDO OS VERTICES E ARESTAS DE UM GRAFO E OS ARMAZENE EM UMA LISTA DE ADJACÊNCIA
*/

#include <iostream>
#include <list>
using namespace std;

struct no
{
    int v;    // vertice de destino da aresta
    int peso; // peso da aresta
};

void bfs(list<no> adj[], int nVertices, int s)
{
    list<int> fila;
    list<no>::iterator q; // iterador para varrer a lista de adjacência
    int state[100];       // Estado de cada linha do vetor da lista adj (1: processado, -1: não descoberto, 0: descoberto)
    int p[100];           // Sem pais: -1
    int u, v;             // Vars aux para mostrar os vértices

    // Preencher todo o status da lista adj como -1 menos "s"
    for (u = 0; u < nVertices; u++)
        if (u != s)
        {
            state[u] = -1;
            p[u] = -1;
        }
    state[s] = 0;
    p[s] = -1;

    fila.push_back(s);

    while (!fila.empty())
    {
        u = fila.front();
        fila.pop_front();
        cout << u << endl;
        for (q = adj[u].begin(); q != adj[u].end(); q++)
        {
            v = q->v;
            cout << u << " " << v << endl;
            if (state[v] == -1)
            {
                state[v] = 0;
                p[v] = u;
                fila.push_back(v);
            }
        }
        state[u] = 1;
    }
}

// Função pra criar arestas
void aresta(list<no> adj[], int u, int v, int p, int orientado)
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
    list<no> adj[1000]; // lista de adjacências
    int nVertices;      // numero de vértices do grafo
    int u, v;           // vértices de origem e destino de uma aresta
    int p;              // peso da aresta
    int s;              // Vértice inicial
    list<no>::iterator q; // iterador para varrer a lista de adjacências
    int orientado = 0;    // MUDAR O ORIENTADO CASO O GRÁFICO SEJA ORIENTADO OU NÃO

    // Entrando com o número de vértices do grafo e o vértice inicial
    cin >> nVertices >> s;

    // Lendo aresta e inserindo no grafo
    cin >> u >> v >> p;
    while (u != -1 && v != -1 && p != -1)
    {
        aresta(adj, u, v, p, orientado);
        cin >> u >> v >> p;
    }

    // Mostrando a lista de adjacências e os vértices
    bfs(adj, nVertices, s);

    return 0;
}