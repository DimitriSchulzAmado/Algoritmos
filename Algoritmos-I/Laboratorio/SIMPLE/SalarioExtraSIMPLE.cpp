#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    char nome[100]; //nome do vendedor
    double fix, Tvenda, percent; //salario fixo && total de vendas && porcentagem

    cin.getline(nome,100);
    cin >> fix >> Tvenda; //entrando com o nome do vendedor e sua renda

    //15% de comissão
    percent = (Tvenda * 15) / 100;
    percent = percent + fix;

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << percent << endl;

    return 0;
}