#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int i; // contador aux
    double N, soma, media; //valor das notas

    

    for (i = 0; i < 10; i++)
    {
        cin >> N;
        soma = soma + N; //fazendo a soma para calcular a media
    }
    
    //tirando a media e mostrando o resultado
    media = soma / 10;
    cout << fixed << setprecision(2);
    cout << media << endl;

    return 0;
}