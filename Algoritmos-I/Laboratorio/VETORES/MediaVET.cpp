#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N;               //quantidade de números
    int valorMedia[100]; //valores que farão a média
    double media;        //media dos valores
    double soma;         //soma dos valores
    int i;
    //entrada de dados
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> valorMedia[i];
        //somando valores
        soma = soma + valorMedia[i];
    }
    //apresentando resultados
    media = soma / N;
    cout << fixed << setprecision(2);
    cout << "Media: " << media << endl;
    cout << "Maiores que a media: ";
    for (int i = 0; i < N; i++)
    {
        if (valorMedia[i] > media)
            cout << valorMedia[i] << " ";
    }
    return 0;
}
