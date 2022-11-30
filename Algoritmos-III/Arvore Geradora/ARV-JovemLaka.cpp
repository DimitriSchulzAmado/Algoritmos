/*
Jovem Laka é um pirata que adora sair nesse mundão atrás de baús.Porém,esses baús não possuem ouro,possuem chocolates.Talento era o nome do pai de Laka e,antes de morrer,Talento disse para Laka que todos os mapas de chocolate possuem um padrão.Cada número representa uma cidade.Quando esse número é inserido em uma árvore,é possível verificar qual o melhor caminho para se chegar ao tesouro que está na cidade X. Laka sempre sabe a cidade onde está o chocolate,portanto,faça um programa que depois de fornecido as cidades,você diga ao jovem Laka qual o melhor caminho.

Entrada
Haverá N(1<=N=100) números,que representam as cidades e devem ser inseridos na árvore, até que a entrada seja -1.

Após isso,será fornecido um número que representa a cidade X,a cidade em que está o chocolate.

Saída
A saída deve conter "Pre","Em" ou "Pos",que representa qual é o caminho mais rápido(PreOrdem,EmOrdem ou PosOrdem).Considere que não haverá empate.


Exemplo de entrada     
10 7 15 2 8 12 20 3 -1
8

Exemplo de saída     
Pos


No exemplo acima os percursos mostrariam as cidades nas seguintes ordens:
PreOrdem: 10 7 2 3 8 15 12 20

EmOrdem: 2 3 7 8 10 12 15 20

PosOrdem: 3 2 8 7 12 20 15 10

Repare que a resposta é Pos,pois o caminho mais rápido até a cidade informada é usando PosOrdem.
*/

#include <iostream>
using namespace std;

// TREE NODE
struct treenode
{
    int info;      // info a ser guardada
    treenode *esq; // ponteiro que aponta pro no da p_esquerda
    treenode *dir; // ponteiro que aponta pro no da p_direita
};

typedef treenode *treenodeptr;

// NODE TREE INPUT
void tInsere(treenodeptr &p, int x)
{
    if (p == NULL) // insere na raiz
    {
        p = new treenode;
        p->info = x;
        p->esq = NULL;
        p->dir = NULL;
    }
    else if (x < p->info) // insert in the left subtree
        tInsere(p->esq, x);
    else // insert in the right subtree
        tInsere(p->dir, x);
}

void preOrdem(treenodeptr tree, int pre[], int &j)
{
    if (tree != NULL)
    {
        pre[j] = tree->info;
        j++;
        preOrdem(tree->esq, pre, j);
        preOrdem(tree->dir, pre, j);
    }
}

void emOrdem(treenodeptr tree, int em[], int &i)
{
    if (tree != NULL)
    {
        emOrdem(tree->esq, em, i);
        em[i] = tree->info;
        i++;
        emOrdem(tree->dir, em, i);
    }
}

void posOrdem(treenodeptr tree, int pos[], int &k)
{
    if (tree != NULL)
    {
        posOrdem(tree->esq, pos, k);
        posOrdem(tree->dir, pos, k);
        pos[k] = tree->info;
        k++;
    }
}

// DELETE ALL TREE
void tDestruir(treenodeptr &tree)
{
    if (tree != NULL)
    {
        tDestruir(tree->esq);
        tDestruir(tree->dir);
        delete tree;
    }
    tree = NULL;
}

int main()
{
    treenodeptr tree = NULL; // pointer to the tree root
    int x = 0; // node value
    int city;  // chocolate city node
    int em[100];  // sequence by emOrdem
    int pre[100]; // sequence by preOrdem
    int pos[100]; // sequence by posOrdem
    int i = 0, j = 0, k = 0; // var. cont. to the three functions pre, em, pos
    int l = 0, m = 0, n = 0; // var cont for

    // Data input
    while (x != -1)
    {   
        cin >> x;
        if (x != -1)
            tInsere(tree, x);
    }
    cin >> city;

    // percurso preOrdem
    preOrdem(tree, pre, j);
    // percurso emOrdem
    emOrdem(tree, em, i);
    // percurso posOrdem
    posOrdem(tree, pos, k);

    // Data output
    while (pre[l] != city)
        l++;
    while (em[n] != city)
        n++;
    while (pos[m] != city)
        m++;

    if (l < m && l < n)
        cout << "Pre" << endl;
    else if (l > m && m < n)
        cout << "Pos" << endl;
    else if (n < m && l > n)
        cout << "em" << endl;

    // Tree remove
    tDestruir(tree);

    return 0;
}