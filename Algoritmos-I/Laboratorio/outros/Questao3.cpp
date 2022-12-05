#include <iostream>
using namespace std;

int main()
{
    int option;           //opções do menu
    float qtdLitrosManha; // quantidade de litros de leite pela manhã
    float qtdLitrosTarde; // quantidade de litros de leite pela tarde
    float a;              //media de litros por dia
    char vaca[100];       //nome da vaca

    do
    { // escolhendo uma opção
        switch (option)
        { // menu
        case 1: //Cadastrando a vaca
            cin.getline >> vaca;
            //quantidade de leite retirados de manhã e de tarde
            cin >> qtdLitrosManha;
            cin >> qtdLitrosTarde;

            break;
        case 2: // Status da vaca
        }
    } while (option != -1);

    return 0;
}
