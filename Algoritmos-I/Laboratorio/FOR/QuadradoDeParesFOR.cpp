#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
	int num, contador, Resp; // numeros && pares && contador && Resultado
 
	// entrando com valores inteiros
  	cin >> num; 
	
	for (contador = 1; contador <= num; contador++)
    { 
      	// condicao inicial
        if (5 < num && num < 2000){
        //para saber se o número é par
			if ((contador % 2) == 0) 
			{
			Resp = pow(contador, 2);
			cout << contador << "^2 = " << Resp << endl;
			}
        }
	}

    return 0;
}