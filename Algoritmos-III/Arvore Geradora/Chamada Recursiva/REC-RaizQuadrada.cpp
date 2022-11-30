/*
Dado um número real positivo x, podemos calcular sqrt(x,2) usando o seguinte algoritmo recursivo:

raiz(x,x0,ϵ) = {Xo,                     |x20−x|≤ ε
               {raiz(X, Xo²+x / 2Xo, ε), caso contrario

onde:

- X: é o número do qual se quer calcular a raiz

- Xo: é uma estimativa inicial para sqrt(x,2)

- ε: é um limitante superior para o erro


Faça um programa que leia os valores de x, x0 e ε, e retorne o valor de sqrt(x,2), com 4 casas decimais. Você pode assumir que estes valores serão sempre positivos.

O cálculo deve ser feito usando uma função recursiva.

Entrada
A entrada consiste 3 valores reais e positivos, correspondentes a x, x0 e ε.

Saída
O programa deve mostrar o valor de sqrt(x,2), com a precisão desejada.

Exemplo de entrada  | Exemplo de saída 
125 1 0.001	        | 11.1803
5 1 0.0001          | 2.2361

*/

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

float raiz(float x, float x0, float e)
{
	float aux;

	aux = fabs(pow(x0, 2) - x);

	if(aux <= e)
		return x0;
	else
		return raiz(x, ((pow(x0, 2) + x) / (2 * x0)), e);
}

int main()
{
	float x, x0, e;

	cin >> x >> x0 >> e;

	cout << fixed << setprecision(2);
	cout << raiz(x, x0, e) << endl;

    return 0;
}