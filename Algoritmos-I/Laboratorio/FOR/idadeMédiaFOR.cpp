#include <iostream>
using namespace std;

int main()
{
	int i; // contador
	int x; // var aux para leitura dos numeros
	int n; // numero de repeticoes
	int soma; // soma dos n numeros
	float media; // media das idades

	// lendo a quantidade de numeros a serem somados
	cin >> n;
	// lendo os numeros e calculando a soma
	soma = 0;
	for(i = 0; i < n; i++)
	{
		cin >> x;
		soma = soma + x;
		//calculando a idade media
		media = 1.0 * soma / n;
	}
	// apresentando resultados
	cout << "media = " << media << endl;

	return 0;
}
