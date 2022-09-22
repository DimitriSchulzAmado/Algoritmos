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

/*
int main
{
    treenodeptr arvore = NULL; //ponteiro para a raiz da árvore
    int x;

    x=14;
    arvore = new treenode; // arvore aponta para o nó criado
    arvore->info = x;
    arvore->esq = NULL;
    arvore->dir = NULL;

    x = 15;
    arvore->dir = new treenode;
    (arvore->dir)->info = x;
    (arvore->dir)->esq = NULL;
    (arvore->dir)->dir = NULL;

    x = 4;
    arvore->esq = new treenode;
    (arvore->esq)->info = x;
    (arvore->esq)->esq = NULL;
    (arvore->esq)->dir = NULL;

    cout << arvore->info << endl;
    cout << arvore->esq->info << endl;
    cout << arvore->dir->info << endl;

    return 0;
} */

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

int main
{
    treenodeptr arvore = NULL; // ponteiro para a raiz da árvore
    int x;

    x = 14;
    tInsere(arvore, x);

    x = 15;
    tInsere(arvore, x);

    x = 4;
    tInsere(arvore, x);

    cout << arvore->info << endl;
    cout << arvore->esq->info << endl;
    cout << arvore->dir->info << endl;

    return 0;
}