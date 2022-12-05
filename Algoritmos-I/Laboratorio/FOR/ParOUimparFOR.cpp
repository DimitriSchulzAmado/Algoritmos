#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, X, i; // quant. de valores do "cin" && Valor Par
        
    cin >> N;

    if (N < 10000){
        
        for(i = 1; i <= N; i++)
        {
            //entrando com valores inteiros
            cin >> X;
            if (pow(-10, 7) < X < pow(10, 7))
            //vendo se o valor eh positivo e contando
                if((X % 2) == 0 && X != 0)
                    cout << "EVEN ";
                else
                    cout << "ODD ";

                if (X > 0)
                    cout << "POSITIVE" << endl;
                else if(X == 0)
                    cout << "FULL" << endl;
                else
                    cout << "NEGATIVE" << endl;
        }
    }

    return 0;
}