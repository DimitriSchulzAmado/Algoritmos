#include <iostream>
#include <cmath>
using namespace std;

int elevado(int x, int y)
{
    int i; //contador
    int res = 1; //resultado à retornar

    //calculando a exponencial
    for (i = 1; i <= y; i++)
        res *= x;
    return res;
}

int main()
{
    int x;      //base
    int y;      //expoente
    int result; //resultado

    //entrando com os valores da exponencial
    cin >> x >> y;
    //apresentando resultados
    result = elevado(x, y);
    cout << result << endl;
    return 0;
}