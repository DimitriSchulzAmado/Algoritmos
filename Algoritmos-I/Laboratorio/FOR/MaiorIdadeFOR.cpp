#include <iostream>
using namespace std;

int main()
{
	int i; // contador
	int x; // var aux para leitura dos numeros
	int n; // numero de repeticoes
	int soma; // soma dos n numeros
    int idade; // idade da pessoa mais velha

	// lendo a quantidade de numeros a serem somados
	cin >> n;
	// lendo os numeros e calculando a soma
	soma = 0;
	for(i = 0; i < n; i++)
	{
		cin >> x;
		//calculando o valor crescente
		idade = -1;
		if(x > idade){
		    idade = x;
		}
	}
	// apresentando resultados
	cout << "a pessoa mais velha tem " << idade << endl;

	return 0;
}