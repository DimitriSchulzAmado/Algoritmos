#include <iostream>
using namespace std;

void soma(int a, int b, int &s) // & = endereço
{
    s = a + b;
}
int main()
{
    int x = 2, y = 3;
    int res = 0;

    soma(x, y, res);

    cout << "Soma = " << res << endl;
}