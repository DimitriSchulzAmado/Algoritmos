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

void contaPreOrdem (treenodeptr arvore, int &n)
{
	if (arvore != NULL)
	{
		n++; // contador de nos
		contaPreOrdem(arvore->esq, n);
		contaPreOrdem(arvore->dir, n);
	}
}

int contaNos(treenodeptr arvore)
{
	int n = 0; // conta os n�s
	contaPreOrdem(arvore, n);
	return n; // retorna a quantidade de nos	
}

int main
{
    treenodeptr arvore = NULL; // ponteiro para a raiz da �rvore
    int n;
    int x;

    cin >> x;
    while (x != -1)
    {
        if(x != -1)
            tInsere(arvore, x);
        cin >> x;
    }
	
	n = contaNos(arvore);
	
	cout << n << "elementos inseridos"
	
    return 0;
}