#include <iostream>
using namespace std;

// NÃ“ DA ARVORE
struct treenode
{
    int info;
    treenode *esq;
    treenode *dir;
};

typedef treenode *treenodeptr; // define um novo tipo de variavel

// Insere o nÃ³ na Ã¡rvore automaticamente
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
	int n = 0; // conta os nós
	contaPreOrdem(arvore, n);
	return n; // retorna a quantidade de nos	
}

int main
{
    treenodeptr arvore = NULL; // ponteiro para a raiz da árvore
    int n;
    
    tInsere(arvore, 12);
	tInsere(arvore, 9);
	tInsere(arvore, 20);
	tInsere(arvore, 7);
	tInsere(arvore, 10);
	
	n = contaNos(arvore);
	
	cout << n << "elementos inseridos"
	
    return 0;
}