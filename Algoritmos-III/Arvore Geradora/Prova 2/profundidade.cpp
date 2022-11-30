/*
Objetivo deste exercício avaliativo: verificar se o aluno sabe usar os percursos em profundidade para varrer árvores e reunir informações sobre a mesma. Desta forma, se estes conceitos não forem usados, sua resposta não será considerada.

Faça um programa que leia vários números inteiros e os insira em uma árvore binária. Depois, faça uso de um dos percursos em profundidade para mostrar os nós cujo campo info é ímpar, em ordem crescente.

Entrada

A entrada consiste de uma única linhas com vários inteiros separados por um espaço em branco. Esta linha termina com o número -1, que não deve ser inserido na árvore.

Saída

Na saída, o programa deve, usando um percurso em profundidade, mostrar os números ímpares em ordem crescente, conforme o exemplo abaixo.

Exemplo de entrada        
2 1 4 7 5 9 -1

Exemplo de saída
1 5 7 9
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
        emOrdem(arvore->esq);
        if(arvore->info %2 != 0)
            cout << arvore->info << " ";
        emOrdem(arvore->dir);
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
    
    // Retorna os valores impares em ordem crescente
    emOrdem(arvore);
    
    //Destruindo o nó por completo
    tDestruir(arvore);

    return 0;
}