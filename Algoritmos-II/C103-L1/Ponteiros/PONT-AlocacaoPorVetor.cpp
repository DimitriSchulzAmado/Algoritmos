/*
Defina uma struct que armazene 4 notas de uma pessoa e a média destas notas.
Depois faça um programa que use um ponteiro para alocar memória para um vetor desta struct, leia 4 notas de várias, e as armazene no vetor alocado.

Por fim, o programa deve calcular a média das notas de cada um, armazená-la na struct e mostrar a média da turma, com 2 casas decimais.

IMPORTANTE: não se esqueça de desalocar a memória ocupada pela struct ao final do programa!  

Entrada
A entrada consiste de várias linhas:
- a primeira consiste de um único inteiro N, que corresponde ao número de alunos

- seguem -se N linhas, cada uma com 4 números inteiros, que correspondem às notas de cada aluno.

Saída
Na saída, o programa deve mostrar a média das médias dos alunos, com 2 casas decimais.

Exemplo de entrada   
2
40 32 51 70
78 95 80 100

Exemplo de saída
68.25
*/

#include<iostream>
#include<iomanip>

using namespace std;


struct dado
{
	float nota[4];
	float media;
};

int main()
{
	dado *valor;
	int N;
	float soma = 0;
	float somaM = 0;
	float mediaM;

	cin >> N;

	valor = new dado[N];

	for(int i = 0; i < N; i++)
	{
		for(int Z = 0; Z < 4; Z++)
		{
			cin >> valor[i].nota[Z];
			soma = soma + valor[i].nota[Z];
		}

		valor[i].media = soma / 4;
		somaM = somaM + valor[i].media;

		soma = 0;
	}

	mediaM = somaM / N;

	cout << fixed << setprecision(2);
	cout << mediaM << endl;

	delete []valor;

	return 0;
}
