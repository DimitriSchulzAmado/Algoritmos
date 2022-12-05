#include <iostream>
using namespace std;

void insercaoDireta(int vetor[], int tamanho)
{
	int i,j; // contadores
	int chave;
	
	for(j = 1; j < tamanho; j++)
	{
		chave = vetor[j];
		i = j-1;
		while ((i >= 0) && (vetor[i] < chave))
		{
			vetor[i+1] = vetor[i];
			i = i-1;
		}
		vetor[i+1] = chave;
	}
}

int main()
{
	int vetor[100]; //vetor a ser ordenado
	int num;		// numeros inseridos no vetor
	int i, j;	    //contador ou tamanho do vetor
	
	// Inserindo os valores no vetor
	cin >> num;
	i = 0;
 	while(num != 0)
    {
	 	vetor[i] = num;
	 	cin >> num;
	 	i++;
    }
    
    insercaoDireta(vetor, i);
    
    for(j = 0; j < i; j++)
        cout << vetor[j] << " ";
    cout << endl;
	return 0;
}