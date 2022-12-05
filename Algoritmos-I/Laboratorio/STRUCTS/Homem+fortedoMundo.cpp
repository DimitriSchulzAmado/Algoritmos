#include <iostream>
#include <cstring>
using namespace std;
struct dados
{
    char nome[100];    //nome completo do atleta
    int atl;           //atleta
    double notas[100]; //nota do atleta
    double soma;       //soma das notas do atleta
    double max_pont;   //maior das pontuações
};

int main()
{
    struct dados info;

    char vitorioso[100];

    info.soma = 0;
    info.max_pont = 0;
    cin >> info.atl;
    for (int i = 1; i <= info.atl; i++)
    {
        cin.ignore();
        cin.getline(info.nome, 100);
        for (int j = 1; j <= 4; j++)
        {
            cin >> info.notas[j];
            info.soma = info.notas[j] + info.soma;
        }
        if (info.soma > info.max_pont)
        {
            info.max_pont = info.soma;
            strcpy(vitorioso, info.nome);
            info.soma = 0;
        }
        else if (info.soma < info.max_pont)
            info.soma = 0;
    }
    cout << vitorioso;
    return 0;
}