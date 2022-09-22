#include <iostream>

using namespace std;

// DADOS PARA CRIAÇÃO DO NÓ DA ARVORE
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

// DELETA A ARVORE POR INTEIRO
void tDestruir (treenodeptr &arvore)
{
	if (arvore != NULL) // Destrói os nós um por um de baixo pra cima
	{
		tDestruir(arvore->esq);
		tDestruir(arvore->dir);
		delete arvore;
	}
	arvore = NULL;
}

// ́arvore bin ́aria vazia  ́e representada por uma variável ponteiro com conteúdo nulo