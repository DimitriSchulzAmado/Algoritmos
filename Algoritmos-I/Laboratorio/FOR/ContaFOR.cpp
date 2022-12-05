#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int conta, i, valores, vp = 0; //conta && aux(contador) && números usados && valores positivos
    int n = 10; //valor fixo lido
    double media, soma = 0; //media && soma

    for(i = 1; i <= n; i++){
        //entrada dos 10 valores && soma
        cin >> valores;
        soma = soma + valores;
        //identificando quantos são positivos
        if(valores > 0){
            vp = vp + 1;
        }   
    }
    //media dos valores positivos inseridos com 2 casas decimais
    media = soma / 10;
    cout << fixed << setprecision(2);

    //apresentando resultados
    cout << "Positivos = " << vp << endl;
    cout << "media = " << media << endl;

    return 0;
}