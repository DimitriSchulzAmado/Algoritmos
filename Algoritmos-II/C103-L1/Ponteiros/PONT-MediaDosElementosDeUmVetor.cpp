/*
Faça um programa que leia inicialmente o tamanho N de um vetor de inteiros.

Depois, o programa deve ler N números inteiros e os inseri-los no vetor.

Finalmente, varra o vetor usando um ponteiro, e calcule a média dos elementos deste vetor.  

Entrada
A entrada consiste de 2 linhas:
- a primeira linha contém apenas um inteiro N, que corresponde ao tamanho do vetor

- na segunda linha, tem-se N inteiros, separados por um espaço em branco.

Saída
Na saída, o programa deve mostrar a média dos elementos inseridos no vetor, com 2 casas decimais.


Exemplo de entrada   
4
40 32 51 70

Exemplo de saída
48.25
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int N;        // tamanho do vetor
    int *p;       // Ponteiro
    int n[100];   // Vetor de elementos
    int soma = 0; // Soma para a média
    float media;  // Média dos elementos

    // Definindo o tamanho do vetor
    cin >> N;

    p = new int[N];

    // Preenchendo o vetor
    for (int i = 0; i < N; i++)
        cin >> n[i];

    p = n;

    // Calculando a soma para fazer a média
    for (int i = 0; i < N; i++)
    {
        soma = soma + *p;
        p++;
    }

    // Calculando a média
    media = soma / (N * 1.00);

    // Exibindo a média dos elementos
    cout << fixed << setprecision(2);
    cout << media << endl;

    return 0;
}
