#include <iostream>
using namespace std;

int elevar(int k, int n)
{
    if (n == 0)
        return 1;
    else
        return k * elevar(k, n - 1);
}

int main()
{
    int k, n; // Valores usados na expressão
    int res;  // retorno da função
    
    // Entrando com os dados
    cin >> k;
    cin >> n;

    // Exibindo resultados
    cout << elevar(k, n) << endl;

    return 0;
}