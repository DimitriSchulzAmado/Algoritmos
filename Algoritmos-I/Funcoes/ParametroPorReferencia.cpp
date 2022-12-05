#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void media(int x, int y, float &m)
{
    m = sqrt(x * y);
}

int main()
{
    int x, y;
    float res = 0;

    //entrando com os valores
    cin >> x >> y;

    if(x >= 0 && y >= 0)
    {
        //chamando a função
        media(x, y, res);
        
        //Exibindo resultados
        cout << fixed << setprecision (2);
        cout << "Media: " << res << endl;
    }
}