/*
Faça um programa,que dado uma árvore,diga quantas folhas essa árvore possui.

As folhas devem ser contadas através da função:

    int contaFolhas(treenodeptr arvore)

Entrada
Haverá N números a serem inseridos na árvore, até que a entrada seja -1.

Saída
A saída deve conter o número de folhas da árvore.


Exemplo de entrada   
10 7 15 2 8 12 20 3 -1

Exemplo de saída     
4

*/

#include <iostream>
using namespace std;

// NÓ DA ARVORE
struct treenode
{
    int info;
    treenode *esq;
    treenode *dir;
};

typedef treenode *treenodeptr;

// INSERE OS NOS NA ARVORE
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
        if(arvore->esq == NULL && arvore->dir == NULL)
            n++;
		contaPreOrdem(arvore->esq, n);
		contaPreOrdem(arvore->dir, n);
	}
}

// CONTADOR DE NOS
int contaNos(treenodeptr arvore)
{
	int n = 0; // conta os nós
	contaPreOrdem(arvore, n);
	return n; // retorna a quantidade de nos	
}

// DELETA A ARVORE POR INTEIRO
void tDestruir (treenodeptr &arvore)
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
    treenodeptr arvore = NULL; // ponteiro para a raiz da árvore
    treenodeptr p = NULL; // Var que recebe o valor de pesquisa

    int x = 0; // Números para fazer a media
    double media;
    int n; // Qtd de nos

    // Entrada
    while(x != -1)
    {
        cin >> x;
        if (x != -1)
            tInsere(arvore,x);
    }

    n = contaNos(arvore);
    cout << n << endl;

    // Apaga todos os nos e a propria arvore
    tDestruir(arvore);

    return 0;
}