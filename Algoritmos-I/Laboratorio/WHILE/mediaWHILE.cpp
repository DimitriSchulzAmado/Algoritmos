#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, i = 0;
    double soma = 0.0, media;

    cin >> n;
    while (n >= 0)
    {
        soma = soma + n;
        i++;
        cin >> n;
    }

    media = soma / i;  
    cout << fixed << setprecision(2);
    cout << media << endl; 

    return 0;
}