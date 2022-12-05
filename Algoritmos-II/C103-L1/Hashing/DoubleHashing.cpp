#include <iostream>
using namespace std;

int h1(int k, int m)
{
    int h = 0; // Recebe o valor de h1

    h = k % m;
    if (h < 0)
        h += m;
    return h;
}

int h2(int k, int m)
{
    int h = 0; // Recebe o valor de h2

    h = 1 + k % (m-1);
    if (h < 0)
        h += m;
    return h;
}

int hash(int k, int m, int i)
{
	return (h1(k, m) + i * h2(k, m)) % (m);
}

int main()
{
	int i; // Número de tentativas
 	int k; // Chave a ser inserida
 	int m; // Tamanho da tabela hash
 	
 	cin >> k >> m;
 	
 	i = 0;
 	do
 	{
	 	cout << hash(k, m, i) << " ";
	 	i++;
	} while(i != m);
 	cout << endl;
 	
    return 0;
}