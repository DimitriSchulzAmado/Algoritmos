#include <iostream>
using namespace std;

int hash_aux(int k, int m)
{
	return k % m;
}

int hash1(int k, int i, int m)
{
	return (hash_aux(k, m) + i) % m;
}

int main()
{
	int k, m;
	int j;
	int vet[100];

	cin >> k >> m;

	for(j = 0; j < m; j++)
		vet[j] = hash1(k, j, m);

	for(j = 0; j < m; j++){
		cout << vet[j];
		if(j < m-1)
			cout << " ";
	}
	cout << endl;

	return 0;
}