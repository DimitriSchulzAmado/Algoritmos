#include <iostream>
using namespace std;

void fatorial(int *a, int *b)
{
    int i;
    *b = 1; //varia junto com o "i"

    //fazendo o fatorial
    for(i = 2; i <= *a; i++)
        *b *= i;
}

int main()
{
    int x;
    int res = 0;

    //lendo o valor X
    cin >> x;

    //Chamando a função
    fatorial(&x, &res);

    //mostrando resultado
    cout << res << endl;

    return 0;
}