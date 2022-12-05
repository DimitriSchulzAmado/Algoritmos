/* 
        LISTA DE ADJACÊNCIAS    
 */

#include <iostream>
#include <list>

using namespace std;

struct no
{
    int v;    // vertice de destino da aresta
    int peso; // peso da aresta
};

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
    int i;                // contador
    list<no>::iterator q; // iterador para varrer a lista de adjacências
    int orientado;        // Verificar se o gráfico é orientado ou não

    // Entrando com o número de vertices do grafo
    cin >> nVertices;

    // Verificar se é orientado
    cin >> orientado;

    // Lendo arestas e inserindo no grafo
    cin >> u >> v >> p;
    while(u != -1 && v != -1 && p != -1)
    {
        cria_aresta(adj, u, v, p, orientado);
        cin >> u >> v >> p;
    }

    // Exibindo a lista de adjacências
    for (i = 0; i < nVertices; i++)
        for (q = adj[i].begin(); q != adj[i].end(); q++)
            cout << i << " " << q -> v << " " << q -> peso << endl;
        
    return 0;
}