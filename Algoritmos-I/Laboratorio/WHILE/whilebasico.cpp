#include <iostream>
using namespace std;

int main(){

    int X; // aux para leitura de dados 
    int soma; // soma dos números

    //lendo elementos e calculando a soma
    soma = 0;
    cin >> X;

    while (X != -1)
    {
        soma = soma + X;
        cin >> X;
    }
    //mostrando o resultado
    cout << "soma = " << soma << endl;

    return 0;
}