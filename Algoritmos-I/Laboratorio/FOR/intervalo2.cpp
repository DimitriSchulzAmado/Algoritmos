#include <iostream>
using namespace std;

int main()
{
    int n;        //numero de repetições
    int i;        //contador
    int in = 0;   //valores dentro do intervalo
    int out = 0;  //valores fora do intervalo
	int X;        //valores a serem lidos de acordo com o numero de repetições
    
    //quantidade de números a testar
    cin >> n;
    //contando os valores dentro e fora dos intervalos [10,20]
    for(i = 0; i < n; i++)
    {
       cin >> X;
	   if(X >= 10 && X <= 20)
	        in = in + 1;
	   else
	        out = out + 1;
    }
    //apresentando valores dentro e fora dos intervalos [10,20]
	cout << in << " in" << endl;
	cout << out << " out" << endl;
	return 0;
}