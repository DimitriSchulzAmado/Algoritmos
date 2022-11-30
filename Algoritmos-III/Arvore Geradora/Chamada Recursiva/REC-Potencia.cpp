/*
Podemos calcular a^n para n>0, usando a seguinte expressão:

an = {1,          n=0
     {a ⋅ a^n−1,   n>0

Faça um programa que leia dois números inteiros a e n, e retorne o valor de a^n.

O cálculo deve ser feito usando uma função recursiva.

Entrada
A entrada consiste de dois números inteiros a e n.
Saída
O programa deve mostrar o valor de an.


Exemplo de entrada
2 3
3 0
-5 3

Exemplo de saída
8
1
-125
*/

#include <iostream>
using namespace std;

int pot(int a, int n)
{
    if (n == 0)
        return 1;
    else
        return a * pot(a, n - 1);
}

int main()
{
    int a, n; // Valores usados na expressÃ£o
    int res;  // retorno da funÃ§Ã£o
    
    // Entrando com os dados
    cin >> a;
    cin >> n;

    // Exibindo resultados
    cout << pot(a, n) << endl;

    return 0;
}