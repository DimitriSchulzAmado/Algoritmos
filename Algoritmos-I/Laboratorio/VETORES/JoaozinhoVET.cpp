#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;       // numero de posições
    int X[100];  //primeiros valores
    int Y[100];  // proximos valores
    char Op[100]; //operações
    float Z[100];  // resultados
    int i;       //contador aux de FOR

    //entrando com o numero de posições
    do
    {
        cin >> n;
    } while (n > 100);
    //entrando com o primeiro valor
    for (i = 0; i < n; i++)
    {
        cin >> X[i];
    }
    //entrando com o segundo valor
    for (i = 0; i < n; i++)
    {
        cin >> Y[i];
    }
    //entrando com os operadores
    for (i = 0; i < n; i++)
    {
        cin >> Op[i];
    }
    //aplicando as contas com os operadores
    for (i = 0; i < n; i++)
    {
        switch (Op[i])
        {
        case ('+'):
            Z[i] = X[i] + Y[i];
            break;
        case ('-'):
            Z[i] = X[i] - Y[i];
            break;
        case ('*'):
            Z[i] = X[i] * Y[i];
            break;
        case ('/'):
            //caso o resultado da divisão for um número real
            if ((X[i] % Y[i]) != 0)
            {
                cout << fixed << setprecision(2);
                Z[i] = X[i] / (Y[i] * 1.0);
            }
            else
                Z[i] = X[i] / Y[i];
            break;
        }
        //apresentando resultados
        cout << X[i] << " " << Op[i] << " " << Y[i] << " = " << Z[i] << endl;
    }
    return 0;
}