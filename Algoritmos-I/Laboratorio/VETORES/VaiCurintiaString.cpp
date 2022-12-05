#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char nomeAtletas[100]; // nome dos jogadores
    int i; //contador do FOR
    int n; // numero de atletas
    int idade; // idade dos atletas

    //entrando com a quantidade de atletas
    cin >> n;
    for(i = 0; i < n; i++)
    { //entrando com os dados de cada atleta
        cin.ignore();
        cin.getline(nomeAtletas, 100);
        cin >> idade;
    //se for adulto
        if (idade >= 18)
        cout << nomeAtletas << " " << idade << endl;
    }
    return 0;
}
