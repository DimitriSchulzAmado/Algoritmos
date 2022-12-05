#include <iostream>
using namespace std;

int sinal(int n)
{
    int P = 0; //verifica se o valor é positivo, negativo ou zero

    if(n < 0)
        P = -1;
    else if(n > 0)
        P = 1;
    else
        P = 0;
    return P;
}

int main()
{
    int x; //numero inteiro qualquer
    int Sinal; //sinal do número inteiro

    //entrando com o número 
    cin >> x;
    
    //trazendo os dados da função
    Sinal = sinal(x);
    //verificando o sinal e exibindo o resultado
    if(Sinal == -1)
        cout << "Negativo" << endl;
    else if(Sinal == 1)
        cout << "Positivo" << endl;
    else
        cout << "Zero" << endl;
    return 0;
}