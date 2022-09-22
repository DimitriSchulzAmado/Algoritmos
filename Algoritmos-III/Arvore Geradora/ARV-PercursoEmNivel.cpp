#include <iostream>
#include <list>
using namespace std;

// NÓ DA ARVORE
struct treenode
{
    int info;
    treenode *esq;
    treenode *dir;
};

typedef treenode *treenodeptr;

// INSERE OS NOS DA ARVORE
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

// ORDENA OS NOS DA ARVORE
void preOrdem(treenodeptr arvore)
{
    if (arvore != NULL)
    {
        cout << arvore->info << " ";
        preOrdem(arvore->esq);
        preOrdem(arvore->dir);
    }
}

// ORDENA DE FORMA CRESCENTE
void emOrdem(treenodeptr arvore)
{
    if (arvore != NULL)
    {
        emOrdem(arvore->esq);
        cout << arvore->info << " ";
        emOrdem(arvore->dir);
    }
}

// ORDENA OS NOS DA ARVORE
void posOrdem(treenodeptr arvore)
{
    if (arvore != NULL)
    {
        posOrdem(arvore->esq);
        posOrdem(arvore->dir);
        cout << arvore->info << "";
    }
}

void emNivel(treenodeptr t)
{
    treenodeptr n;
    list<treenodeptr> q;

    if (t != NULL)
    {
        q.push_back(t);
        while (!q.empty())
        {
            n = *q.begin();
            q.pop_front();
            if (n->esq != NULL)
                q.push_back(n->esq);
            if (n->dir != NULL)
                q.push_back(n->dir);
            cout << n->info << " ";
        }
        cout << endl;
    }
}

// DELETA A ARVORE POR INTEIRO
void tDestruir(treenodeptr &arvore)
{
    if (arvore != NULL)
    {
        tDestruir(arvore->esq);
        tDestruir(arvore->dir);
        delete arvore;
    }
    arvore = NULL;
}

int main()
{
    treenodeptr arvore = NULL; // ponteiro para a raiz

    int x = 0; // valores dos nos

    //Entrada
    while (x != -1)
    {
        cin >> x;
        if (x != -1)
            tInsere(arvore, x);
    }

    // Saida
    emNivel(arvore);

    // Apaga todos os nos e a propria arvore
    tDestruir(arvore);
    return 0;
}