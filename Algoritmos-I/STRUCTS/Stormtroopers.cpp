#include <iostream>
#include <iomanip>
using namespace std;

struct dados
{
    int id;   //identificação do soldado
    float IM; //indice de maldade
    float FA; //força de abate
    float GA; //grau de aptidão
};

int main()
{
    dados Storm[1000];
    float best = -1; // melhor dos Stormtroppers
    int i = 0; //var auxiliar
    int identidade; // id do melhor soldado

    //entrando com as características de cada Stormtropper
    cin >> Storm[i].id;
    while (Storm[i].id != 0)
    {
        cin >> Storm[i].IM;
        cin >> Storm[i].FA;

        //fazendo a media e vendo qual o melhor soldado
        Storm[i].GA = (Storm[i].IM + Storm[i].FA) / 2;
        if(Storm[i].GA > best)
        {
            identidade = Storm[i].id;
            best = Storm[i].GA;
        }
        i++;
        cin >> Storm[i].id;
    }
    //exibindo resultados
    cout << "Stormtrooper escolhido: " << identidade << endl;
	cout << fixed << setprecision(2);
	cout << "GA = " << best << endl;
    return 0;
}