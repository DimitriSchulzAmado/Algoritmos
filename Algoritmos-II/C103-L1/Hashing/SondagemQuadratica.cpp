#include <iostream>
using namespace std;

int hash_aux(int k, int m)
{
    int h = 0; // Recebe o valor de h

    h = k % m;
    if (h < 0)
        h += m;
    return h;
}

int hash1(int k, int i, int m, int c1, int c2)
{
	return (hash_aux(k, m) + c1 * i + c2 * (i * i)) % m; 	
}

int main()
{
	int i;	// Contador
	int k;	// Chave inserida
	int m;	// Tamanho da tabela
	int c1, c2;	//
	
	//Entrando com os dados gerais
	cin >> k >> m >> c1 >> c2;
    
    i = 0;
    do
    {
		cout << hash1(k, i, m, c1, c2) << " ";
		i++;
    }while(i != m);
 	cout << endl;
    return 0;
}