#include <iostream>
using namespace std;

// NÓ DA ARVORE
struct treenode
{
    int info;
    treenode *esq;
    treenode *dir;
};

typedef treenode *treenodeptr; // define um novo tipo de variavel

// Insere o nó na árvore automaticamente
void tInsere(treenodeptr &p, int x)
{
    if (p == NULL) // insere na raiz
    {
        p = new treenode;
        p->info = x;
        p->esq = NULL;
        p->dir = NULL;
    }
    else if (x < p->info) // insere na subarvore esquerda
        tInsere(p->esq, x);
    else // insere na subarvore direita
        tInsere(p->dir, x);
}

// Procura o valor inteiro na árvore
treenodeptr tPesq(treenodeptr p, int x)
{
    if (p == NULL) // elemento não encontrado
        return NULL;
    else if (x == p->info) // elemento encontrado na raiz
        return p;
    else if (x < p->info) // procura na sub árvore esquerda
        return tPesq(p->esq, x);
    else // procura na sub árvore direita
        return tPesq(p->dir, x);
}

int main
{
    treenodeptr arvore = NULL; // ponteiro para a raiz da árvore
    treenodeptr p = NULL; // Var que recebe o valor de pesquisa

    int x;

    x=14;
    tInsere(arvore, x);
    
    x = 15;
    tInsere(arvore, x);

    x = 4;
    tInsere(arvore, x);

    if(p = NULL)
        cout << "Elemento nao encontrado" << endl;
    else
        cout << p->info << endl;

    return 0;
}