#include <iostream>
#include <iomanip>
#include <climits>
#include <list>
using namespace std;

struct no
{
    int v;    // vertice de destino da aresta
    float peso; // peso da aresta
};

void prim(list<no> adj[], int nVertices, int start)
{
    list<int> fila;
    list<no>::iterator q; // iterador para varrer a lista de adjacência
    int state[10];        // Estado de cada linha do vetor da lista ADJ(-1: não descoberto, 0: descoberto)
    int pais[10];         // Sem pais: -1
    int distancia[10];    // Distância de um vértice até o outro
    int destino;          // Destino do vértice
    int peso;             // Peso da aresta
    int u, v;             // Vars aux para mostrar os vértices
    int dist;             // Var aux da distância
    float custo = 0;      // Custo da árvore gerada

    for (u = 0; u < nVertices; u++)
    {
        state[u] = -1;
        distancia[u] = INT_MAX;
        pais[u] = -1;
    }

    distancia[start] = 0;
    v = start;

    while (state[v] == -1)
    {
        state[v] = 0;
        for (q = adj[v].begin(); q != adj[v].end(); q++)
        {
            destino = q->v;
            peso = q->peso;
            cout << destino << " " << peso << endl;

            if (distancia[destino] > peso && state[destino] == -1)
            {
                distancia[destino] = peso;
                pais[destino] = v;
            }
        }

        v = 0;
        dist = INT_MAX;

        for (u = 0; u < nVertices; u++)
            if (state[u] == -1 && dist > distancia[u])
            {
                dist = distancia[u];
                v = u;
            }
    }

    // Somando o custo
    for (u = 1; u < nVertices; u++)
        custo += distancia[u];

    // Mostrando quais computadores devem ser interligados
    cout << "Ligacoes: " << endl;
    for (u = 1; u < nVertices; u++)
        cout << pais[u] << " " << u << endl;

    // Exibindo qtd total de cabos
    cout << fixed << setprecision(1) << endl;
    cout << "Custo total: " << custo << " m" << endl;
}

// Função pra criar arestas
void aresta(list<no> adj[], int u, int v, int p)
{
    no aux; // var aux para inserir as arestas na lista de adjacências
    aux.peso = p;
    aux.v = u;
    adj[v].push_back(aux);
}

int main()
{
    list<no> adj[100];    // lista de adjacências
    int nVertices;        // numero de computadores do grafo
    int u, v;             // Ponto de inicio e fim de um cabo
    float p;              // peso do cabo
    int s;                // Computador inicial
    list<no>::iterator q; // iterador para varrer a lista de adjacências

    // Lendo numero de vértices do grafo
    cin >> nVertices;

    // Lendo o vértice inicial
    cin >> s;

    // Lendo aresta e inserindo no grafo
    cin >> u >> v >> p;

    while (u != -1 && v != -1 && p != -1)
    {
        aresta(adj, u, v, p);
        cin >> u >> v >> p;
    }

    // Mostrando quais computadores devem ser ligados e a qtd total de cabos 
    prim(adj, nVertices, s);

    return 0;
}