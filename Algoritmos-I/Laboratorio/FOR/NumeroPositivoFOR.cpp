#include <iostream>
using namespace std;

int main()
{
	int i; // contador
	int x; // var aux para leitura dos numeros
	int n; // numero de repeticoes
	int ValorP; // valores positivos

	// lendo a quantidade de numeros a serem somados
	cin >> n;
	// lendo os numeros e calculando a soma
	ValorP = 0;
	for(i = 1; i <= n; i++)
	{
		cin >> x;
		//vendo se o valor eh positivo e contando
		if(x == 0)
			n++;
		
		else if(x > 0)
				ValorP = ValorP + 1;

	}

	// apresentando resultados
	cout << ValorP << " valores positivos" << endl;

	return 0;
}
