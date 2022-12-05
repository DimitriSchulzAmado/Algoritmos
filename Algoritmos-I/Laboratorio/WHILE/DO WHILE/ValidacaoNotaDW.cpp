#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double n, n2, media;
	int ask;
	
	do //estrutura que vai fazer a crítica geral para reiniciar a sequência
	{
		do //criticando o primeiro valor
		{
			cin >> n;
			cout << "nota invalida" << endl;
		} while (n < 0 || n > 10);
		
		do //criticando o segundo valor
		{
			cin >> n2;
			cout << "nota invalida" << endl;
		} while (n2 < 0 || n2 > 10);
		
		//calculando a media e apresentando resultado
		media = (n + n2) / 2;
		cout << fixed << setprecision (2);
		cout << "media = " << media << endl;
		// novo ciclo
		do
		{
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> ask;
		} while (ask != 1 && ask != 2);
	} while(ask != 2);
    return 0;
}