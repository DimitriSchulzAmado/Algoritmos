#include <iostream>
using namespace std;

struct dados
{
    char nome[50]; //nome da pessoa
    char niver[8]; //data de aniversario da pessoa
    char sexo;     //sexo da pessoa
};
int main()
{
    struct dados people;

    cin.getline(people.nome, 50);
    cin.getline(people.niver, 8);
    cin >> people.sexo;

    cout << people.nome << endl;
    cout << people.niver << endl;
    cout << people.sexo << endl;
    return 0;
}
