#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int cod, cod2, num, num2;
    double Vuni, Vuni2;
    double total;

    cin >> cod >> num >> Vuni; //ler o código, número, valor unitário da peça 1
    cin >> cod2 >> num2 >> Vuni2; //ler o código, número, valor unitário da peça 2

    total = (num * Vuni) + (num2 * Vuni2);

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;
    return 0;
}