#include <iostream>
using namespace std;

void Tabuada(int N)
{
    int i = 1;  //contador da função
    int x[100]; //valor de retorno da tabuada

    //fazendo a tabuada
    for (i = 1; i <= 10; i++)
    {
        x[i] = N * i;
        cout << N << " x " << i << " = " << x[i] << endl;
    }
}

int main()
{
    int n;       //numero que será feita a Tabuada
    int tabuada; //retorno da função

    //entrando com o valor para fazer a tabuada
    cin >> n;
    //retorno da função
    Tabuada(n);

    return 0;
}