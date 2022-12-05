/*
Defina uma struct que armazene quatro notas de uma pessoa e a média destas notas.
Depois faça um programa que use um ponteiro para alocar memória para esta struct, leia 4 notas, armazenando-as na struct alocada.

Por fim, o programa deve calcular a média das notas, armazená-la na struct e mostrar a média calculada, com 2 casas decimais.

IMPORTANTE: não se esqueça de desalocar a memória ocupada pela struct ao final do programa!  

Entrada
A entrada consiste de 4 números inteiros, que correspondem às notas do aluno.

Saída
Na saída, o programa deve mostrar a média das notas, com 2 casas decimais.


Exemplo de entrada   
40 32 51 70

Exemplo de saída
48.25
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct dado{
    int nota;
    int nota2;
    int nota3;
    int nota4;
    float media;
};


int main()
{
    int soma = 0;
    dado *aluno; //ponteiro para uma struct dado

    //Alocação de memoria para um novo aluno
    aluno = new dado;

    //Ler as notas
    cin >> aluno->nota;
    cin >> aluno->nota2;
    cin >> aluno->nota3;
    cin >> aluno->nota4;

    //Fazer a media
    soma = aluno->nota + aluno->nota2 + aluno->nota3 + aluno->nota4;
    aluno->media = soma / 4.0;

    //Mostrando resultado
    cout << fixed << setprecision(2);
    cout << aluno->media << endl;

    //Liberar memória
    delete aluno;

    return 0;
}