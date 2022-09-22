#include <iostream>
using namespace std;

// NÓ DA ARVORE
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

void emOrdem(treenodeptr arvore, int cres[], int &n)
{
    if (arvore != NULL)
    {
        emOrdem(arvore->esq, cres, n);
        cres[n++] = arvore->info; // guarda os valores da arv no vetor
        emOrdem(arvore->dir, cres, n);
    }
}

int contaPrimos(treenodeptr arvore)
{
    int i = 1, j;          // contadores for
    int e_vet;             // num de elementos do vetor
    int contp, primos = 0; // contador de primos e num de primos
    int cres[100];         // vetor da funcao emOrdem

    emOrdem(arvore, cres, i);
    e_vet = i - 1;

    for (i = 1; i <= e_vet; i++)
    {
        contp = 0;
        for (j = 1; j <= cres[i]; j++)
        {
            if (cres[i] % j == 0)
                contp++;
        }
        if (contp == 2)
            primos++;
    }
    return primos;
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
    treenodeptr arvore = NULL; // ponteiro para a raiz da árvore

    int x = 0;  // valores a serem comparados
    int primos; // Contador de primos

    // Entrada
    while (x != -1)
    {
        cin >> x;
        if (x != -1)
            tInsere(arvore, x);
    }

    primos = contaPrimos(arvore);
    cout << primos << " numeros primos" << endl;

    // Apagando os nos e arvore por completo
    tDestruir(arvore);

    return 0;
}