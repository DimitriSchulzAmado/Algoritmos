#include <iostream>
using namespace std;

// Fun��o que implementa a busca
int sequencial(int vetor[],int tamanho, int x)
{
    bool achou = false; // var aux p/ busca 
    int i = 0;          // contador
    
    while (achou == false && i < tamanho)
        achou = vetor[i++] == x;
    
    // Se x for encontrado, retorna a posi��o do mesmo no vetor
    if (achou)
        return (i-1);
    
    // Se x n�o for encontrado, retorna -1
    else
        return -1;
}

int main()
{ 
    int vet[100]; // vetor onde sera realizada a busca
    int x;        // elemento a ser procurado
    int tam;      // contador do tamanho do vetor
    int res;      // retorno da função
    
    // Entrada de dados no vetor
    tam = 0;
    do{
		cin >> vet[tam++];

	} while(vet[tam-1] != -1);

    // Numero a ser procurado
    cin >> x;
	
	// Chamando a fun��o e apresentando resultados
    res = sequencial(vet, tam, x);
    if(res == -1)
        cout << x << " nao foi encontrado" << endl;
    else if(res != -1)
        cout << x << " encontrado na posicao " << res << endl;
    return 0;
}