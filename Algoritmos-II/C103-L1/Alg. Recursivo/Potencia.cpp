#include <iostream>
using namespace std;

int pot(int a, int n)
{
    if (n == 0)
        return 1;
    else
        return a * pot(a, n - 1);
}

int main()
{
    int a, n; // Valores usados na expressão
    int res;  // retorno da função
    
    // Entrando com os dados
    cin >> a;
    cin >> n;

    // Exibindo resultados
    cout << pot(a, n) << endl;

    return 0;
}