#include <iostream>
#include <iomanip>
using namespace std;

// NÓ DA ARVORE
struct treenode
{
    int info; // guarda todos os valores da arvore
    treenode *esq; // ponteiro que aponta para o nó esquerdo
    treenode *dir; // ponteiro que aponta para o nó direito
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

void PreOrdem (treenodeptr arvore, double &cont, double &i)
{
	if (arvore != NULL)
	{
		cont += arvore->info;
        i++;
		PreOrdem(arvore->esq, cont, i);
		PreOrdem(arvore->dir, cont, i);
	}
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

    double soma = 0; // soma de todos os valores da arv
    double i = 0;    // conta a quantidade de nós para a média
    int x = 0;       // Valores dos nós

    //* ENTRADA
    while(x != -1)
    {
        cin >> x;
        if (x != -1)
            tInsere(arvore,x);
    }
  
    // Soma dos valores da arvore
    PreOrdem(arvore, soma, i);

    //* SAIDA
    cout << fixed << setprecision(2);
    cout << "Media: " << soma / i << endl;

    // Apaga todos os nos e a propria arvore
    tDestruir(arvore);

    return 0;
}

