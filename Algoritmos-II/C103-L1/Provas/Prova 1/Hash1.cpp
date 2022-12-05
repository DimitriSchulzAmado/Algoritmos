#include <iostream>
using namespace std;

//Estrutura para armazenamento dos dados na tabela hash
struct dado
{
    int k;      // chave
    int status; // 0: vazio, 1: ocupado
};

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
	return (hash_aux(k, m) + c1 * i + c2 * i * i) % m; 	
}

// Função que insere elementos no vetor
int hash_insert(dado t[], int m, int k, int c1, int c2)
{
    int i = 0; // Var contadora
    int j;     // Var que assumirá o valor da posição de k

    do
    {
        j = hash1(k, i, m, c1, c2);
        if (t[j].status != 1)
        {
            t[j].k = k;
            t[j].status = 1;
            return j;
        }
        else
            i = i + 1;
    } while (i != m);
    return -1;
}

int main()
{
    dado T[100];
	int i;	// Número de tentativas
	int k;	// Chave inserida
	int m;	// Tamanho da tabela
	int c1, c2;	// Números que vão auxiliar na conta
	
	//Entrando com os dados gerais
    cin >> m;
    cin >> c1;
    cin >> c2;
    
     // Inserindo o valor inicial das chaves
    for (i = 0; i < m; i++)
    {
        T[i].k = -1;
        T[i].status = 0;
    }

    /* Inserindo as chaves no vetor e 
        exibindo resultados diretamente da função */
    cin >> k;
    while (k != -1)
    {
        hash_insert(T, m, k, c1, c2);
        cin >> k;
    }

    // Saida de dados
    for (i = 0; i < m - 1; i++)
        cout << T[i].k << " ";
    cout << T[i].k << endl;

    return 0;
}