#include <iostream>
using namespace std;

int main()
{
    int i, N, x, maior, menor; //Contador && números a serem comparados && auxiliar && maior num && menor num
    cin >> N;

    menor = 10000;
    for (i = 1; i <= N; i++)
    {
        cin >> x;
        if (i == 1) //caso o i seja igual a 1
        {
            maior = x;
            menor = x;
        }
        else if (x > maior)
            maior = x;

        else if (x < menor)
            menor = x;
    }
    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;

    return 0;
}