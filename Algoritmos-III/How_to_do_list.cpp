#include <iostream>
#include <list>
using namespace std;

// NÓ DA ARVORE
struct treenode
{
    int info;
    treenode *esq;
    treenode *dir;
};

typedef treenode *treenodeptr;

// pagina 69 da apostila
void emNivel(treenodeptr t) // t aponta pra raiz da arvore
{
    treenodeptr n; // ponteiro
    list<treenodeptr> q; // noptr q = NULL;

    if(t != NULL)
    {
        q.push_back(t); // coloca t em q
        while(!q.empty()) // enquanto a fila não estiver vazia
        {
            n = *q.begin(); // n aponta pra onde q esta apontando
            q.pop_front();
            if (n->esq != NULL)
                q.push_back(n->esq); // insere n->esq na fila se não estiver vazio
            if (n->dir != NULL)
                q.push_back(n->dir); // insere n->dir na fila se não estiver vazio
            cout << n->info << " "; 
        }
    }
}

int main()
{
    list<int> Q; // cria uma lista de inteiros
    int x; //var auxiliar

    x = 10;
    Q.pushback(x); //insere o x no final da fila

    x = 4;
    Q.pushback(x); // insere o x depois do valor ja inserido (Q -> 10 -> 4)

    x = *Q.begin() // aponta pro primeiro nó da lista

    Q.pop_front(); // tirar o primeiro nó da lista
    return 0;
}