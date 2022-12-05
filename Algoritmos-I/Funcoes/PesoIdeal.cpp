#include <iostream>
#include <iomanip>
using namespace std;

double ideal(double h, char sexo)
{
    double P; //retorno do peso ideal

    if(sexo == 'M')
        P = (72.7 * h) - 58;
    else
        P = (62.1 * h) - 44.7;
    return P;
}

int main()
{
    double x; //altura em metros
    char y; //sexo de uma pessoa
    double PesoIdeal; //resultado final

    //entrando com os dados
    cin >> x;
    do
    { //critica de dados
        cin >> y;
    } while(y != 'M' && y != 'F');

    //chamando a função "ideal"
    PesoIdeal = ideal(x, y);
    //saida de dados
    cout << fixed << setprecision(2);
    cout << "Peso ideal: " << PesoIdeal << " kg" << endl;
    return 0;
}