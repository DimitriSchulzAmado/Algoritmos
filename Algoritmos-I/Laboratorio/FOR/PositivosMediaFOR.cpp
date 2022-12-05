#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int i, ValorP; // Contador && Valores positivos
	double x; // var aux para leitura dos numeros
	double soma, media;

    soma = 0;
    ValorP = 0;
    // lendo os numeros e calculando a media
	for(i = 1; i <= 6; i++)
	{   
        cin >> x;
		
		if(x > 0)
        {
            soma = soma + x;
			ValorP = ValorP + 1;
        }
	}
	//calculando a media
	media = soma / ValorP;
	// apresentando resultados
    cout << ValorP << " valores positivos" << endl;
    cout << fixed << setprecision(1);
	cout << media << endl;

    return 0;
}