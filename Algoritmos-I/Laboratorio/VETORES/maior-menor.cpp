#include <iostream>
using namespace std;

int main()
{
    int N;          // numero de vetores
    int valor[100]; //valor de cada vetor
    int menor;      //menor vetor
    int pmenor = 0;     // posição do menor vetor
    int maior;      //maior vetor
    int pmaior = 0;     //posição do maior vetor
    int i; // contador

    // lendo o numero de vetores
    cin >> N;
    //lendo os valores dentro do vetor
    for (i = 0; i < N; i++)
        cin >> valor[i];
    //determinando a posição do menor vetor
    menor = valor[0];
    maior = valor[0];
    for (i = 1; i < N; i++)
    {
        if (valor[i] < menor)
        {
            menor = valor[i];
            pmenor = i;
        }
        if (valor[i] > maior)
        {
            maior = valor[i];
            pmaior = i;
        }
    }
    //apresentar a solução
    cout << "Pos Menor: " << pmenor << endl;
    cout << "Valor Menor: " << menor << endl;
    cout << "Pos Maior: " << pmaior << endl;
    cout << "Valor Maior: " << maior << endl;

    return 0;
}