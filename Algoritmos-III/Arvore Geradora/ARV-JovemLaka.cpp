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
    else if (x < p->info) // insere na subarvore esquerda
        tInsere(p->esq, x);
    else // insere na subarvore direita
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

// DELETA A ARVORE POR INTEIRO
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