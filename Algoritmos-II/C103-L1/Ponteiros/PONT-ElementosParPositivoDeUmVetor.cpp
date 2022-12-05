/*
Faça um programa que leia inicialmente o tamanho N de um vetor de inteiros.

Depois, o programa deve ler N números inteiros e os inseri-los no vetor.

Finalmente, varra o vetor usando um ponteiro, e determine quantos elementos são pares e positivos.  

Entrada
A entrada consiste de 2 linhas:
- a primeira linha contém apenas um inteiro N, que corresponde ao tamanho do vetor

- na segunda linha, tem-se N inteiros, separados por um espaço em branco.

Saída
Na saída, o programa deve mostrar o número de elementos pares e positivos inseridos no vetor.

Exemplo de entrada   
6
-2 40 32 -51 70 -22

Exemplo de saída
3
*/

#include <iostream>
using namespace std;

int main()
{
    int N;       // Tamanho do vetor
    int *p;      // Ponteiro
    int n[100];  // Vetor de elementos
    int num = 0; // Número par e positivo

    // Definindo o tamanho do vetor
    cin >> N;

    // Alocação de memoria
    p = new int[N];

    // Preenchendo o vetor
    for (int i = 0; i < N; i++)
        cin >> n[i];

    p = n;

    // Verificando se o numero é par e positivo
    for (int i = 0; i < N; i++)
    {
        if (*p % 2 == 0 && *p > 0)
            num++;

        p++;
    }

    // Exibindo resultados
    cout << num << endl;
    return 0;
}
