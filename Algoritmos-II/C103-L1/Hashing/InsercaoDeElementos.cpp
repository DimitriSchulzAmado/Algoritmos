#include <iostream>
using namespace std;

//Estrutura para armazenamento dos dados na tabela hash
struct dado
{
    int k;      // chave
    int status; // 0: vazio, 1: ocupado
};

// Função aux para o calculo da prosição em que a chave k
// vai ser inserida em uma tabela de tamanho m
int hash_aux(int k, int m)
{
    int h;
	h = k % m;
	if(h < 0)
		h += m;
	return h;
}

// Função de sondagem linear
int hash1(int k, int i, int m)
{
    return (hash_aux(k, m) + i) % m;
}

// Algoritimo de inserção
int hash_insert(dado T[], int m, int k)
{
    int i, j; //contadores

    i = 0;
    do
    {
        j = hash1(k, i, m);
        if (T[j].status != 1)
        {
            T[j].k = k;
            T[j].status = 1;
            return j; // posição em que k foi inserida em T
        }
        else
            i = i + 1;
    } while (i != m);

    return -1; // tabela cheia
}

int main()
{
    dado T[20]; //Tabela

    int m; // Tamanho da tabela
    int i; //contador
    int k;

    // Lendo o tamanho da tabela
    cin >> m;

    // Inserindo o valor das chaves
    for (i = 0; i < m; i++)
    {
        T[i].k = -1;
        T[i].status = 0;
    }

    // Ler chaves e inserir na tabela
    cin >> k;
    while (k != 0)
    {
        hash_insert(T, m, k);
        cin >> k;
    }

    // Mostrando a tabela
    for (i = 0; i < m; i++)
        cout << T[i].k << " ";
    cout << endl;

    return 0;
}