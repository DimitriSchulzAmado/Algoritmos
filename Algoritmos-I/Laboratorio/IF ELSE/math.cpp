#include<iostream>
#include <iomanip>
#include <cmath> 

using namespace std;

int main()
{
    int codigo, quant;
    
    // NA MATRIZ A PRIMEIRA LINHA EH A LINHA "0", A PRIMEIRA COLUNA EH A COLUNA "0" 

    // nesse caso L0 C0 eh o "1", L1 C0 eh "2", L0 C1 eh "4.0", L0 C2 "NAO EXISTE"
    double matriz [5] [2] = {{1, 4.0}, // matriz pd ser int, float ou double.
                             {2, 4.5},
    /* essa matriz vai do*/  {3, 5.0},
    /* L0 ao L4 e*/          {4, 2.0},
    /* C0 ao C1 */           {5, 1.5}}; /* Se for por uma variavel pra declarar alguma linha ou coluna,
                                                            essa variavel tem q ser declarada em int*/
    cin >> codigo >> quant;

    cout << fixed << setprecision (2);

    cout << "Total: R$ " << ( matriz [(codigo - 1)] [1] ) * quant << endl; 

    return 0;
}
