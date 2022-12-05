#include <iostream>
#include <iomanip>

using namespace std;

int main(){
        
    double renda;
    double faixa1, faixa2, faixa3;
    double irfinal;

    cin >> renda;

    if(renda <= 2000)
        cout << "Isento" << endl;

    else if(renda >= 2000.01 && renda <= 3000){
        faixa1 = renda - 2000;
        faixa2 = faixa1 - 1000;
        irfinal = faixa1 * 0.08;
        cout << fixed << setprecision(2);
        cout << "R$ " << irfinal << endl;
    }

    else if(renda >= 3000.01 && renda <= 4500){
        faixa1 = renda - 2000;
        faixa2 = faixa1 - 1000;
        irfinal = (faixa1 * 0.08) + (faixa2 * 0.10);
        cout << fixed << setprecision(2);
        cout << "R$ " << irfinal << endl;
    }

    else if(renda > 4500){
        faixa1 = renda - 2000;
        faixa2 = faixa1 - 1000;
        faixa3 = faixa2 - 1500;
        irfinal = (faixa1 * 0.08) + (faixa2 * 0.10) + (faixa3 * 0.10);
        cout << fixed << setprecision(2);
        cout << "R$ " << irfinal << endl;
    }

return 0;
}