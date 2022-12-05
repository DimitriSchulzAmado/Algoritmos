#include <iostream>
using namespace std;

int primo(int x)
{
    int div = 0; //ver se é primo
    //vendo se ele é divisível por outro número
    for (int i = 1; i <= x; i++)
        if (x % i == 0)
            div++;

    return div;
}

int main()
{
    int x; //um valor qualquer, primo ou não
    int div;

    //ler um valor
    cin >> x;

    //chamando a função
    div = primo(x);

    //se ele for divisível por outro número alem dele mesmo e "1"
    if (div == 2)
        cout << "Primo" << endl;
    else
        cout << "Not" << endl;
    return 0;
}