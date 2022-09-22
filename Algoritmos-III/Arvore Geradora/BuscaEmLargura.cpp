#include<iostream>
#include<list>
using namespace std;

// Struct para armazenar os elementos de uma árvore binária
struct treenode
{
    int info;
    treenode *esq;
    treenode *dir;
};
typedef treenode *treenodeptr;

// Insere elementos em uma árvore binária
void tInsere(treenodeptr &p, int x)
{
    if (p == NULL) // raiz
    {
        p = new treenode;
        p->info = x;
        p->esq = NULL;
        p->dir = NULL;
    }
    else if (x < p->info) // subarvore esquerda
        tInsere(p->esq, x);
    else // subarvore direita
        tInsere(p->dir, x);
}
// Realiza um percurso em nível na árvore
void emNivel(treenodeptr t, int &soma)
{
    treenodeptr n;
    list<treenodeptr> q;
    if (t!=NULL)
    {
        q.push_back(t);
        while (!q.empty())
        {
            n = *q.begin();
            q.pop_front();
            if (n->esq != NULL)
                q.push_back(n->esq);
            if (n->dir != NULL)
                q.push_back(n->dir);
            soma += n->info;
        }
        cout << endl;
    }
}

// DELETA A ARVORE POR INTEIRO
void tDestruir (treenodeptr &tree)
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
    treenodeptr tree = NULL;
    int x;
    int soma = 0;
    
    // Lendo elementos e inserindo na árvore
    cin >> x;
    while(x != -1)
    {
        tInsere(tree, x);
        cin >> x;
    }

    // Percurso em nível
    emNivel(tree, soma);

    // Soma dos valores percorridos em nivel
    cout << soma << endl;
    
    // Deletando a arvore por completo
    tDestruir(tree);

    return 0;
}