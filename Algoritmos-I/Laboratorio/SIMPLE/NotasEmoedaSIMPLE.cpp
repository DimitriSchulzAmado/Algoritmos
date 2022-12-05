#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double valor; //valor monetario a ser contabilizado
    int inteira; //valor inteiro
    int fracao;

    cin >> valor;
    inteira = valor;
    valor -= inteira;

    fracao = round((valor * 100)); //é usado para arredondar o valor double/float, dando um parâmetro para o valor integral mais próximo
    cout << "NOTAS:" << endl;
    cout << inteira / 100 << " nota(s) de R$ 100.00" << endl;
    inteira -= (inteira / 100) * 100;
    //caso o  valor das notas anterior seja maior que 50
    if (inteira > 50)
    {
        cout << "1 nota(s) de R$ 50.00" << endl;
        inteira -= 50;
    }
    else
        cout << "0 nota(s) de R$ 50.00" << endl;

    cout << inteira / 20 << " nota(s) de R$ 20.00" << endl;
    inteira -= (inteira / 20) * 20;
    cout << inteira / 10 << " nota(s) de R$ 10.00\n"
         << endl;
    inteira -= (inteira / 10) * 10;
    cout << inteira / 5 << " nota(s) de R$ 5.00" << endl;
    inteira -= (inteira / 5) * 5;
    cout << inteira / 2 << "nota(s) de R$ 2.00" << endl;
    //-----------------------------------------------------------moedas
    cout << "MOEDAS:" << endl;
    inteira -= (inteira / 2) * 2;
    cout << inteira << " moeda(s) de R$ 1.00" << endl;

    if (fracao > 50)
    {
        cout << "1 moeda(s) de R$ 0.50" << endl;
        fracao -= 50;
    }
    else
        cout << "0 moeda(s) de R$ 0.50" << endl;

    cout << fracao / 25 << " moeda(s) de R$ 0.25" << endl;
    fracao -= (fracao / 25) * 25;
    cout << fracao / 10 << " moeda(s) de R$ 0.10" << endl;
    fracao -= (fracao / 10) * 10;
    cout << fracao / 5 << " moeda(s) de R$ 0.05" << endl;
    fracao -= (fracao / 5) * 5;
    cout << fracao << " moeda(s) de R$ 0.01" << endl;
    return 0;
}