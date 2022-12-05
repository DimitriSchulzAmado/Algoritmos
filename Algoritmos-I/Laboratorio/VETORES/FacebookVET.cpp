#include <iostream>
using namespace std;

int main()
{
    int N;            // numero de usuários do Facebook
    int contato[100]; // numero de contatos de cada pessoa
    int menor;        //menor quantidade de amigos
    int maior;        // maior quantidade de amigos
    int i;            // contador

    // lendo o numero de pessoas
    cin >> N;
    //lendo a quantidade de contatos de cada pessoa
    for (i = 0; i < N; i++)
        cin >> contato[i];
    //determinando o maior e menor numero de contatos
    menor = contato[0];
    maior = contato[0];
    for (i = 1; i < N; i++)
    {
        if (contato[i] < menor)
            menor = contato[i];

        if (contato[i] > maior)
            maior = contato[i];
    }
    //apresentar a solução
    cout << "Menor numero de contatos: " << menor << endl;
    cout << "Maior numero de contatos: " << maior << endl;

    return 0;
}