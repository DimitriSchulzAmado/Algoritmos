#include <iostream>
using namespace std;

int binaria(int vetor[],int tamanho, int x)
{
    bool achou; // var aux p/ busca
    int baixo, meio, alto; // var aux
    
    baixo = 0;
    alto = tamanho-1;
    achou = false;

    while ((baixo <= alto) && (achou == false))
    {
        meio = (baixo + alto) / 2;
        if (x < vetor[meio])
            alto = meio - 1;
        else if (x > vetor[meio])
            baixo = meio + 1;
        else
            achou = true;
    }
    if (achou)
        return meio;
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
    res = binaria(vet, tam, x);
    if(res == -1)
        cout << "Nao possui acesso" << endl;
    else if(res != -1)
        cout << "Possui acesso" << endl;
    return 0;
}
