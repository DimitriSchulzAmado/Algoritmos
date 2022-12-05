#include <iostream>
#include <cstring>
using namespace std;

struct dados
{
    char name[50]; //nome do cavaleiro Jedi
    int base;      //número da base
};

int main()
{
    struct dados Cavaleiro[50];

    int N;             //número de cavaleiros a cadastrar
    char research[50]; //busca pelo nome do cavaleiro
    int i;             //contador for

    //entrada dos dados dos cavaleiros
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin.ignore();
        cin.getline(Cavaleiro[i].name, 50);
        cin >> Cavaleiro[i].base;
    }
    //fazendo a busca e vendo se o cavaleiro esta em alguma base
    cin.ignore();
    cin.getline(research, 50);
    for(int j = 0; j < N; j++)
    {
        if (strcmp(research, Cavaleiro[j].name) == 0)
        {
            cout << "Este cavaleiro esta na base " << Cavaleiro[j].base << endl;
            j = N;
        }
        else
        {
            cout << "Este cavaleiro nao esta cadastrado" << endl;
            j = N;
        }
    }
    return 0;
}