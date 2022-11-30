/*
Dado uma sequência de números,ordene-os em ordem decrescente usando os conceitos de árvore.

Entrada
Haverá N números, onde cada um conterá os valores a serem inseridos na árvore, até que a entrada seja -1.

Saída
A saída deve conter a sequência decrescente


Exemplo de entrada     
10 7 15 2 8 12 20 3 -1

Exemplo de saída     
20 15 12 10 8 7 3 2

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

// EM ORDEM DECRESCENTE AO INVES DE CRESCENTE
void emOrdem(treenodeptr arvore)
{
    if(arvore != NULL)
    {
        emOrdem(arvore->dir);
        cout << arvore->info << " ";
        emOrdem(arvore->esq);
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
    treenodeptr arvore = NULL; // armazena os numeros

    int x = 0; // var aux para leitura de dados
    
    while(x != -1)
    {
        cin >> x;
        if(x != -1)
            tInsere(arvore, x);
    }
    emOrdem(arvore);
    
    //Destruindo o nó por completo
    tDestruir(arvore);

    return 0;
}