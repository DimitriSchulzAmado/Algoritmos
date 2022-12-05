#include <iostream>
using namespace std;

//Estrutura para armazenamento dos dados na tabela hash
struct dado
{
    int k;
    int status; // 0-vazio, 1-ocupado, 2-removido
};

// Função aux para o calculo da posição em que a chave k
// vai ser inserida em uma tabela de tamanho m
int hash_aux(int k, int m)
{
    int h; // Recebe o valor de h

    h = k % m;
    if (h < 0)
        h += m;
    return h;
}

// Função de sondagem linear
int hash1(int k, int i, int m)
{
    return (hash_aux(k, m) + i) % m;
}

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
            i++;
    } while (i != m);

    return -1; // tabela cheia
}

// Função de pesquisa
int hash_search(dado T[], int m, int k)
{
    int i, j; // contadores

    i = 0;
    do
    {
        j = hash1(k, i, m); // chama hash1 e armazena em j
        if (T[j].k = k)     // Compara o valor da tabela com a chave
            return j;       // retorna a posição do K
        i++;
    } while (T[j].status != 0 && i < m);
    return -1;
}

int hash_remove(dado T[], int m, int k)
{
    int j;

    j = hash_search(T, m, k);
    if (j != -1)
    {
        T[j].status = 2;
        T[j].k = -1;
        return 0; // consegui remover
    }
    else
        return -1; // k nao esta na tabela
}

int main()
{
    int m;          // Tamanho da tabela
    int i;          // contador
    int k;          // Chave
    int remove; // Chave a ser removida

    dado T[1000];

    // Tamanho da tabela de
    cin >> m;

    // Inserindo o valor das chaves
    for (i = 0; i < m; i++)
    {
        T[i].k = -1;     // Valores de K igual a -1
        T[i].status = 0; // todos status iguais a 0 indicando que esta vazio
    }

    // Ler chaves e inserir na tabela
    cin >> k;
    while (k != 0)
    {
        hash_insert(T, m, k);
        cin >> k;
    }

    cin >> remove;

    hash_remove(T, m, remove);

    // Exibindo a tabela
    for (i = 0; i < m - 1; i++)
        cout << T[i].k << " ";
    cout << T[i].k << endl;
    return 0;
}