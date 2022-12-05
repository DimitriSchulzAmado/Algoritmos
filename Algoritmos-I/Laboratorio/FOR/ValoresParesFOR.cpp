#include <iostream>
using namespace std;

int main()
{
    int N, ValorP, i; // numero && Valor Par
    
    ValorP = 0;
	for(i = 1; i <= 5; i++)
	{
        //entrando com valores inteiros
        cin >> N;
		//vendo se o valor eh positivo e contando
		if((N % 2) == 0)
				ValorP = ValorP + 1;
	}
    //apresentando resultado
    cout << ValorP << " valores pares" << endl;

    return 0;
}