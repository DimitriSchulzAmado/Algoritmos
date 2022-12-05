#include <iostream>
using namespace std;

struct dados
{
    int codigo;     // código do produto
    int quantidade; // quantidade em estoque
    float preco;    // preço unitário
};

void quickSort(dados vetor[], int tamanho, int i, int j)
{
    int esq, dir, pivo;
    dados trab; // var aux p/ trocar elementos do vetor de lugar

    esq = i;
    dir = j;
    pivo = vetor[(int)round((esq + dir) / 2.0)].codigo; // divide o vetor em 2

    do
    {
        while (vetor[esq].codigo < pivo)
            esq++;
        while (vetor[dir].codigo > pivo)
            dir--;
        if (esq <= dir)
        {
            trab = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = trab;
            esq++;
            dir--;
        }
    } while (esq <= dir);

    if (dir - i >= 0)
        quickSort(vetor, tamanho, i, dir);
    if (j - esq >= 0)
        quickSort(vetor, tamanho, esq, j);
}

int main()
{
    dados prod[100];

    int n; // Número de produtos a serem cadastrados
    int i; //contador

    // Lendo o número de produtos a serem cadastrados
    cin >> n;

    // Inserindo as características de cada produto
    for (i = 0; i < n; i++)
    {
        cin >> prod[i].codigo;
        cin >> prod[i].quantidade;
        cin >> prod[i].preco;
    }

    if (dir - i >= 0)
        quickSort(prod, n, i, dir);
    if (j - esq >= 0)
        quickSort(prod, n, esq, j);

    cout
    return 0;
}