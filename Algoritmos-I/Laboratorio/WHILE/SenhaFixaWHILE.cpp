#include <iostream>
using namespace std;

int main(){

    int Teste; //valor da senha

    //entrando com os dados e fazendo o teste das senhas
    cin >> Teste;

    while (Teste != 2002)
    {
        cout << "Senha Invalida" << endl;
        cin >> Teste;
    }
    //caso acerte a senha
    cout << "Acesso Permitido" << endl;

    return 0;
}