/*
Faça um programa que leia inicialmente o tamanho N de um vetor de inteiros.

Depois, o programa deve ler N números inteiros e os inseri-los no vetor.

Finalmente, varra o vetor usando um ponteiro, e retorne o maior elemento deste vetor.  

Entrada
A entrada consiste de 2 linhas:
- a primeira linha contém apenas um inteiro N, que corresponde ao tamanho do vetor

- na segunda linha, tem-se N inteiros, separados por um espaço em branco.

Saída
Na saída, o programa deve mostrar o maior elemento elemento inserido no vetor.


Exemplo de entrada   
4
40 32 51 70

Exemplo de saída
70
*/

#include<iostream>
using namespace std;

int main()
{

	int N;      // Tamanho do vetor
	int *p;     // Ponteiro
	int n[100]; // vetor de elementos
	int maior;  // Maior elemento

    // Definindo o tamanho do vetor
	cin >> N;

	p = new int[N];

    // Preenchendo o vetor de elementos
	for(int i = 0; i < N; i++)
		cin >> n[i];

	p = n;
    
    // Verificando qual o maior elemento do vetor
	for(int i = 0; i < N; i++)
	{
		if(i == 0)
			maior = *p;
		else if(*p > maior)
			maior = *p;
		p++;
	}

    // Exibindo maior elemento
	cout << maior << endl;

	return 0;
}
