#include <iostream>
using namespace std;

void bubbleSort(int vetor[], int tamanho)
{
    int i,j; // contadores
    int trab;
    bool troca;
    int limite;

    troca = true;
    limite = tamanho-1;

    while (troca)
    {
        troca = false;
        for (i = 0; i < limite; i++)
            if (vetor[i] > vetor[i+1])
            {
                trab = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = trab;
                j = i;
                troca = true;
            }
        limite = j;
    }
}

int main()
{
    int x;
    int vetor[100];
    int tam = 0;

    //Lendo os dados
    cin >> x;
    while(x != 0)
    {
        vetor[tam] = x;
        tam++;
        cin >> x;
    }
    bubbleSort(vetor, tam);
    
    for(int i = 0; i < tam; i++)
        cout << vetor[i] << " ";
    cout << endl;
    
    return 0;
}