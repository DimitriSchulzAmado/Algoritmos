#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N;      //quantidade do vetor
    int Ni[50]; //números que preenchem o vetor
    int X;      //número a ser achado
    int cont = 0;   //numero de vezes em que X aparece
    float p100;   // %

    //entrando com a quantidade do vetor
    cin >> N;
    //entrando com os dados que preenchem o vetor
    for(int i = 0; i < N; i++)
    {
        cin >> Ni[i];
    }
    cin >> X;
    for(int i = 0; i < N; i++)
    {
        if(Ni[i] == X)
            cont++;
    }
    //calculando a %
    p100 = (cont / N) * 100.0;
    //mostrando resultados
    cout << fixed << setprecision(2);
    cout << p100 << endl;
    return 0;
}
