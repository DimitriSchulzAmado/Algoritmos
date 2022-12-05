#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calc_delta(double a, double b, double c)
{
    double D;

    if(a != 0)
    {
        D = pow(b, 2) - 4 * a * c;
    }
    //saindo com o Delta
    return D;
}

int main()
{
    double a, b, c; //valores da formula de Baskhara
    double Delta;

    //Entrando com a equação do 2°grau ( ax^2 + bx + c = 0 )
    cin >> a >> b >> c;

    //Exibindo resultados
    Delta = calc_delta(a, b, c);
    cout << fixed << setprecision(2);
    cout << "delta = " << Delta << endl;
    return 0;
}