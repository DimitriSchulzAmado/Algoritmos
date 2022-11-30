/*
Faça um programa que leia vários números inteiros e os insira em uma árvore binária.

Depois o programa deve ler um inteiro x e remover todos os nós cujo campo info seja igual a x, e mostrar os elementos restantes, em ordem crescente.

Entrada
A entrada consiste de duas linhas:

- a primeira linha tem vários números inteiros, que devem ser ineridos na árvore. Esta linha termina com o número 0, que não deve ser inserido na árvore

- a segunda linha tem o valor de x

Saída
Após remover os nós cujo campo info é igual a x, o programa deve mostrar os nós restantes, em ordem crescente, como no exemplo abaixo.

Exemplo de entrada     
10 7 4 2 4 5 0
4

Exemplo de saída     
2 5 7 10
*/

#include <iostream>
#include <list>
using namespace std;

//NÓ DA ARVORE
struct treenode
{
  int info;
  treenode *esq;
  treenode *dir;
};

typedef treenode *treenodeptr;

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

// COLOCA EM ORDEM CRESCENTE
void emOrdem(treenodeptr arvore)
{
  if (arvore != NULL)
  {
    emOrdem(arvore->esq);
    cout << arvore->info << " ";
    emOrdem(arvore->dir);
  }
}

void emNivel(treenodeptr t)
{
  treenodeptr n;
  list<treenodeptr> q;

  if (t != NULL)
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
      cout << n->info << endl;
    }
    cout << endl;
  }
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

// REMOVE OS NOS DESEJADOS
int tRemove(treenodeptr &raiz, int x)
{
  treenodeptr p;
  if (raiz == NULL) // Arvore vazia (nao consegui remover o no
    return 1;
  if (x == raiz->info)
  {
    p = raiz;
    if (raiz->esq == NULL) // A raiz nao tem filho esquerdo
      raiz = raiz->dir;
    else if (raiz->dir == NULL) // a raiz nao tem filho direito
      raiz = raiz->esq;
    else // a raiz tem os dois filhos
    {
      p = tMenor(raiz->dir);
      raiz->info = p->info;
    }
    delete p;
    
    return 0;
  }
  else if (x < raiz->info)
    return tRemove(raiz->esq, x);
  else
    return tRemove(raiz->dir, x);
}

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

int main()
{
  treenodeptr arvore = NULL; // ponteiro para a raiz
  int rem; // no que eu quero remover
  int node; // valores para os nós
  int aux;

  // ENTRADA DOS NOS NA ARVORE
  cin >> node;
  while (node != 0)
  {
    tInsere(arvore, node);
    cin >> node;
  }
  // REMOVENDO O NO DESEJADO
  cin >> rem;

  aux = tRemove(arvore, rem);
  while (aux != 1)
    aux = tRemove(arvore, rem);

  // SAIDA
  emOrdem(arvore);

  // Apaga todos os nos e a propria arvore
  tDestruir(arvore);

  return 0;
}
