#include <iostream>
#include <cstring> //biblioteca para caracteres
using namespace std;

int main()
{
    char nome[10]; //armazena o nome da pessoa
    char nome1[10]; //

    nome[0] = 'F';
    nome[1] = 'e';
    nome[2] = 'l';
    nome[3] = 'i';
    nome[4] = 'p';
    nome[5] = 'e';
    nome[6] = '\0'; //fim do vetor

    strcpy(nome1, nome); //copia o conteúdo de nome para nome1
    cout << nome << endl;
    // para escrever um nome usa-se aspas duplas
    strcpy(nome, "Marco"); //copia "Marco" para nome
    cout << nome << endl;

    return 0;
}
