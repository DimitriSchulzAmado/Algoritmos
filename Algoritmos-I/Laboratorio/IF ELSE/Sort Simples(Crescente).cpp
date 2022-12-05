#include<iostream>
using namespace std;
//-----------------------------------------------NUCLEO
int main()
{
//-----------------------------------------------VAR
	int a, b, c, aux;
//-----------------------------------------------ENTRADA
	cin >> a >> b >> c;	
//-----------------------------------------------EST.DECISAO
	if(a < b)
	{
		aux = a;
		a = b;
		b = aux;
	}
	if(b < c)
	{
		aux = b;
		b = c;
		c = aux;
	}
	if(c < a)
	{
		aux = c;
		c = a;
		a = aux;
	}
	cout << a << endl << b << endl << c << endl;
	return 0;
}
