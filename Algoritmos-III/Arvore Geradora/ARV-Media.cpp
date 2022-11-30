/*
Faça um programa que insira vários números em uma árvore, e depois verifique qual a média dos elementos da árvore.

A média deve ser calculada através de uma função com o seguinte cabeçalho:

    float media(treenodeptr arvore)

Entrada
Na primeira linha da entrada serão fornecidos vários números, que deverão ser inseridos na lista até que seja lido o número -1.

Saída
O programa deve informar a média com 2 casas de precisão.


Exemplo de entrada     
8 3 10 14 6 4 13 7 1 -1

Exemplo de saída     
Media: 7.33
*/

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

// SOMA DOS NOS
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

// MEDIA
float media(treenodeptr arvore)
{
    double media = 0; // media dos valores da arv
    double sum = 0; // soma dos nos
    double i; // contador de nos

    PreOrdem(arvore, sum, i);
    media = sum / i;
    return media;
}

int main()
{
    treenodeptr arvore = NULL; // ponteiro para a raiz da árvore

    double soma = 0; // soma de todos os valores da arv
    double media_s;
    double i = 0;    // conta a quantidade de nós para a média
    int x = 0;       // Valores dos nós

    //* ENTRADA
    while(x != -1)
    {
        cin >> x;
        if (x != -1)
            tInsere(arvore,x);
    }

    //* SAIDA
    cout << fixed << setprecision(2);
    media_s = media(arvore);
    cout << "Media: " << media_s << endl;

    // Apaga todos os nos e a propria arvore
    tDestruir(arvore);

    return 0;
}