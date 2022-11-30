/*
Objetivo deste exercício avaliativo: verificar se o aluno sabe usar o percurso em nível para varrer árvores e reunir informações sobre a mesma. Desta forma, se este conceito não for usado, sua resposta não será considerada.

Faça um programa que leia vários números inteiros e os insira em uma árvore binária. Depois, faça uma alteração na função que implementa o percurso em nível para calcular a média dos elementos inseridos na árvore. A sua função alterada deve ter o seguinte cabeçalho:

    float calcMedia(treenodeptr arvore)


A função que implementa o percurso em nível é mostrada abaixo:

    void emNivel(treenodeptr t)
    {
        list<treenodeptr> q; // fila auxiliar
        treenodeptr n = t; // ponteiro para varrer a árvore
        if (t != NULL)
        {
            q.push_front(n);
            while (!q.empty())
            {
                n = q.front();
                q.pop_front();
                if (n->esq != NULL)
                    q.push_back(n->esq);
                if (n->dir != NULL)
                    q.push_back(n->dir);
                cout << n->info << " " << endl;
            }
        }
    }

Entrada

A entrada consiste de uma única linhas com vários inteiros separados por um espaço em branco. Esta linha termina com o número -1, que não deve ser inserido na árvore.


Saída

Na saída, o programa deve mostrar a média aritmética dos elementos inseridos na árvore, com duas casas decimais.

Exemplo de entrada
2 1 4 7 5 9 -1

Exemplo de saída
media = 4.67
*/

#include <iostream>
#include <iomanip>
#include <list>
using namespace std;

// NÓ DA ARVORE
struct treenode
{
    double info;
    treenode *esq;
    treenode *dir;
};

typedef treenode *treenodeptr;

// DELETA A ARVORE POR INTEIRO
void tDestruir(treenodeptr &arvore)
{
    if (arvore != NULL)
    {
        tDestruir(arvore->esq);
        tDestruir(arvore->dir);
        delete arvore;
    }
    arvore = NULL;
}

// INSERE OS NOS DA ARVORE
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

void emNivel(treenodeptr t, double &soma, int &contador)
{
    list<treenodeptr> q; // fila auxiliar
    treenodeptr n = t; // ponteiro para varrer a árvore
    if (t != NULL)
    {
	    q.push_front(n);
	    while (!q.empty())
	    {
	        n = q.front();
	        q.pop_front();
	        if (n->esq != NULL)
		        q.push_back(n->esq);
	        if (n->dir != NULL)
		        q.push_back(n->dir);
	        soma = soma + n->info;
	        contador++;
	    }
    }
}

float calcMedia(treenodeptr arvore, double &soma, int &contador)
{
    double media;
    
    media = soma / contador;
    
    return media;
}

// Outro jeito de fazer a média

/*
float calcMedia(treenodeptr arvore)
{

    treenodeptr n;
    list<treenodeptr> q;
    float media = 0;
    float contador = 0;
    float soma = 0;

    if (arvore != NULL)
    {
        q.push_back(arvore);

        while (!q.empty())
        {
            n = *q.begin();
            q.pop_front();

            contador++;

            if (n->esq != NULL)
            {
                q.push_back(n->esq);
            }

            if (n->dir != NULL)
            {
                q.push_back(n->dir);
            }

            soma += n->info;
        }
    }
    media = soma / contador;

    return media;
}
*/

int main()
{
    treenodeptr arvore = NULL; // ponteiro para a raiz

    double x = 0; // valores dos nos
    double soma = 0; // soma dos valores dos nos
    int i; // contador de nos para a media 
    double media_no; // armazena a media dos nos da arvore

    //Entrada dos nos
    while (x != -1)
    {
        cin >> x;
        if (x != -1)
            tInsere(arvore, x);
    }

    //  Linha em nivel
    emNivel(arvore, soma, i);
    
    
    media_no = calcMedia(arvore, soma, i);
    cout << fixed << setprecision(2);
    cout << "media = " << media_no << endl;
    
    // Apaga todos os nos e a propria arvore
    tDestruir(arvore);
    return 0;
}