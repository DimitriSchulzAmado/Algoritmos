#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main()
{
    char nome[50];            //nome completo
    int mat[100];             //matricula aluno
    float NP1[100], NP2[100]; //notas aluno
    double media[100];        //media das notas do aluno
    double media_Geral = 0;       //media das notas do aluno
    int id = 0;               //contador for
    double maior_media = 0;
    double menor_media = 0;

    //entrando com o nome
    cin.getline(nome, 50);
    while (strcmp(nome, "SAIR") != 0)
    {
        cin >> mat[id];
        cin >> NP1[id];
        cin >> NP2[id];
        media[id] = (NP1[id] + NP2[id]) / 2;
        cout << "Aluno: " << nome << endl;
        cout << "Mat: " << mat[id] << endl;
        cout << fixed << setprecision(2);
        cout << "Media: " << media[id] << endl;
        cin.ignore();
        cin.getline(nome, 50);
        id++;
    }
    if (strcmp(nome, "SAIR") == 0 && id == 0)
        cout << "Programa Finalizado" << endl;
    //exibindo resultados
    else
    {
        media_Geral += media[id];
        cout << fixed << setprecision(2);
        cout << "Media Geral: " << media_Geral << endl;
        if()      
    }
    return 0;
}
