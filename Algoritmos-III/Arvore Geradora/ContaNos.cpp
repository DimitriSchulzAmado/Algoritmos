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

// DELETA A ARVORE POR INTEIRO
void tDestruir (treenodeptr &tree)
{
	if (tree != NULL)
	{
		tDestruir(tree->esq);
		tDestruir(tree->dir);
		delete tree;
	}
	tree = NULL;
}

int main
{
    treenodeptr tree = NULL; // ponteiro para a raiz da �rvore
    int n;
    int x;

    // Entrada dos nós da árvore
    cin >> x;
    while(x != -1)
    {
        if(x != -1)
            tInsere(tree, x);
        cin >> x;
    }
    contaPreOrdem (tree, n);
	n = contaNos(tree);
	
    // Saindo com a quantidade de nós inseridos na árvore
	cout << n << " elementos inseridos" << endl;
	
    // Apaga todos os nos e a propria arvore
    tDestruir(tree);

    return 0;
}