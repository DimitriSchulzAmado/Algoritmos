/*
Faça um programa que verifique qual o menor e maior elemento de uma árvore. Crie as funções abaixo para encontrar estes elementos:

    int menor(treenodeptr arvore)

    int maior(treenodeptr arvore)

Entrada
Haverá N números, onde cada um conterá os valores a serem inseridos na árvore, até que a entrada seja -1.

Saída
A saída deve conter o menor e o maior elemento.


Exemplo de entrada     
10 7 15 2 8 12 20 3 -1

Exemplo de saída     
2 e 20
*/

#include <iostream>
using namespace std;

// NÓ DA ARVORE
struct treenode
{
    int info;
    treenode *esq; // no esquerdo
    treenode *dir; // no direito
};

typedef treenode *treenodeptr; // define um novo tipo de variavel

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

// ORDENA OS NOS DA ARVORE
void PreOrdem (treenodeptr arvore, int &maior, int &menor)
{
	if (arvore != NULL) 
	{
	    if(arvore->info > maior) // maior valor
	        maior = arvore->info;
        if(arvore->info < menor) // menor valor
            menor = arvore->info;
		PreOrdem(arvore->esq, maior, menor);
		PreOrdem(arvore->dir, maior, menor);
	}
}

// MAIOR NO DA ARVORE
int maior(treenodeptr arvore)
{
    int maior = -10000;
    int menor = 90000;
    PreOrdem(arvore, maior, menor);
    
    return maior;
}

// MENOR NO DA ARVORE
int menor(treenodeptr arvore)
{
    int maior = -10000;
    int menor = 90000;
    PreOrdem(arvore, maior, menor);
    
    return menor;
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
    treenodeptr arvore = NULL; // armazena os numeros

    int maior_no; // maior valor
    int menor_no; // menor valor
    int x = 0; // var aux para leitura de dados

    // Entrada
    while(x != -1)
    {
        cin >> x;
        if (x != -1)
            tInsere(arvore,x);
    }
    
    // MOSTRANDO O MENOR E MAIOR VALOR RESPECTIVAMENTE
    cout << menor(arvore) << " e " << maior(arvore) << endl;

    // Apaga todos os nos e a propria arvore
    tDestruir(arvore);
    
    return 0;
}