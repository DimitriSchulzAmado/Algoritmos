#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int calc_raizes(float a, float b, float c, float &x1, float &x2)
{
    float Delta;
    Delta = pow(b, 2) - 4 * a * c;
    
    //0 se a eq tiver raízes, 1 caso contrário
    if(Delta >= 0){
        x1 = (-b + sqrt(Delta)) / (2 * a);
        x2 = (-b - sqrt(Delta)) / (2 * a);
        return 1;
    }
    else
        return 0;
}

int main() 
{
    float a, b, c; //valores da formula ax² + bx + c
    float raiz, raiz2;
    cin >> a >> b >> c;

    calc_raizes(a, b, c, raiz, raiz2);

    cout << fixed << setprecision(2);
    if(raiz > raiz2)
    {
        cout << "x1 = " << raiz2 << endl;
        cout << "x2 = " << raiz << endl;
    }
    else if(raiz < raiz2)
    {
        cout << "x1 = " << raiz << endl;
        cout << "x2 = " << raiz2 << endl;
    }
    else if(raiz == raiz2)
        cout << "x = " << raiz << endl;
    else
        cout << "Nao ha raizes reais" << endl;
    return 0;
}