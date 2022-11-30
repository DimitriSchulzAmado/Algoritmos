/*
Faça um programa que leia N números inteiros e os insira em uma árvore binária.
Depois o programa deve ler um outro número X e verificar se o mesmo está ou não na árvore

Entrada
A entrada consiste de três linhas:

a primeira consiste de um único inteiro N, que corresponde à quantidade de números a serem inseridos na árvore.
a segunda linha irá conter N números inteiros, que devem ser inseridos na árvore.
a última linha contém um único inteiro X, que é o elemento a ser procurado
Saída
Na saída, o programa deve mostrar a mensagem "Encontrado", se X estiver na árvore, ou a mensagem "Nao encontrado", caso contrário.


Exemplo de entrada      | Exemplo de entrada
8                       | 8
10 7 15 2 8 12 20 3     | 10 7 15 2 8 12 20 3
3                       | 1
                        |
Exemplo de saída        | Exemplo de saída   
Encontrado              | Nao encontrado

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

typedef treenode *treenodeptr; // define um novo tipo de variavel

// Insere o nó na árvore automaticamente
void tInsere(treenodeptr &p, int &x)
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

treenodeptr tMenor(treenodeptr &raiz)
{
    treenodeptr t;
    t = raiz;
    if (t->esq == NULL) // encontrou o menor valor
    {
        raiz = raiz->dir;
        return t;
    }
    else // continua a busca na subarvore esquerda
        return tMenor(raiz->esq);
}

// Procura o valor inteiro na árvore
treenodeptr tPesq(treenodeptr p, int x)
{
    if (p == NULL) // elemento não encontrado
        return NULL;
    else if (x == p->info) // elemento encontrado na raiz
        return p;
    else if (x < p->info) // procura na sub árvore esquerda
        return tPesq(p->esq, x);
    else // procura na sub árvore direita
        return tPesq(p->dir, x);
}

// EM ORDEM DECRESCENTE AO INVES DE CRESCENTE
void emOrdem(treenodeptr arvore)
{
    if(arvore != NULL)
    {
        emOrdem(arvore->dir);
        cout << arvore->info << endl;
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
    treenodeptr arvore = NULL; // ponteiro para a raiz da árvore
    treenodeptr p = NULL; // ponteiro que aponta p/ o valor pesquisado

    int N; // quantidade de números a serem inseridos na árvore.
    int v; // valores inseridos na árvore.
    int x; // nó procurado
    int i; // contador

    //Input 
    cin >> N;

    for(i = 0; i < N; i++)
    {
        cin >> v;
        tInsere(arvore, x);
    }

    //Search value
    cin >> x;
    tPesq(p, x);

	if(p == NULL)
        cout << "Nao encontrado" << endl;
    else
        cout << "Encontrado" << endl;

    // delete all tree nodes
    tDestruir(arvore);
    return 0;
}