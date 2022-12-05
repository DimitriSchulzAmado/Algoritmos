#include <iostream>
#include <iomanip> // fixa as casas decimais
#include <cmath> // funcoes matematicas

using namespace std;

int main() {
	
	int x,y; // Operandos
	int soma;
 	int dif;
 	int prod; 
 	float div;
 	int res;
 	float raiz;
 	float elev; // x^y
 	
	cin >> x >> y;
		soma = x + y;
		dif = x - y;
		prod = x * y;
		div = 1.0 * x / y;
		res = x % y;
		raiz = sqrt(x);
		elev = pow(x,y);
		
		cout << fixed << setprecision (2); // quantidade de casas decimais ex.: 0,67
		cout << "soma= " << soma << endl;
		cout << "diferenca= " << dif << endl;
		cout << "produto= " << prod << endl;
		cout << "divisao= " << div << endl;
		cout << "resto= " << res << endl;
		cout << "raiz de x = " << raiz << endl;
		cout << "x^y= " << elev << endl;
	
	return 0;
}