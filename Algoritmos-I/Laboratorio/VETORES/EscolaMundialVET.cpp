#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int alunos;        //alunos a serem avaliados
    int acima = 0;     // alunos acima da media
    int abaixo = 0;    //alunos abaixo da media
    double notas[100]; //nota dos alunos
    double media;      //media das notas gerais
    double soma;       //soma das notas
    int aux;           //notas dos alunos

    //entrando com o numero de alunos
    cin >> alunos;
    //entrando com as notas
    for (int i = 0; i < alunos; i++)
    {
        cin >> aux;
        notas[i] = aux;
    }
    //vendo se a nota é acima ou abaixo da média
    for (int i = 0; i < alunos; i++)
    {
        soma += notas[i];
        if (notas[i] >= 60 && notas[i] <= 100)
            acima = acima++;
        else if (notas[i] < 60 && notas[i] >= 0)
            abaixo = abaixo++;
    }
    //media das notas
    media = soma / alunos;
    cout << fixed << setprecision(2);
    cout << "Media da turma: " << media << endl;
    cout << "Alunos com nota acima da media: " << acima << endl;
    cout << "Alunos com nota abaixo da media: " << abaixo << endl;
    return 0;
}