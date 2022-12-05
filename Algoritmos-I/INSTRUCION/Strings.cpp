/*
    °°° ENTRADA DE DADOS
    °°° STRINGS
    °°° SEPARANDO UMA STRING 
*/

//========================================================================================
//°°°ENTRADA DE DADOS
#include <iostream>
#include <cstring> //biblioteca para caracteres
using namespace std;

int main()
{
    char nome[20]; // armazena o nome da pessoa
    int idade; // idade da pessoa
    int comprimento; //numero de letras no nome

    cin >> idade;
    cin.ignore(); //ignora os valores de entrada acima
    cin.getline(nome, 20);
    comprimento = strlen(nome); //informa o tamanho da string armazenada

    cout << "MUITO PRAZER: " << nome << endl << "SUA IDADE EH: " << idade << endl;
    cout << "Comprimento: " << comprimento << endl;

    return 0;
}

//========================================================================================
//°°°STRINGS

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char nome[20];
    char nome2[20];

    strcpy(nome, "Abel"); //copia o conteudo da string origem para a destino
    strcpy(nome2, "Bia"); 

    cout << strcmp(nome, nome2) << endl; //O comando "strcmp" Verifica se as duas strings são iguais.
    cout << strcmp(nome2, nome) << endl;
    cout << strcmp(nome, nome) << endl;

    return 0;
}

//========================================================================================
//°°°SEPARANDO UMA STRING

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[] = "Minha casa, sua casa."; // outro jeito de declarar um vetor
    char *pch; // " * " é um ponteiro

    pch = strtok(str, " ,.-"); //Esta função encontra o token na string apontada por strtok. O delimitador do ponteiro aponta para os caracteres separadores.
    while (pch != NULL)
    {
        cout << pch << endl;
        pch = strtok(NULL, " ,.-");
    }
    return 0;
}