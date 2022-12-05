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
    int h = 0; // Recebe o valor de h

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
        i = i + 1;
    } while (T[j].status != 0 && i < m);
    return -1;
}

int main()
{
    int m;          // Tamanho da tabela
    int i;          // Contador
    int k;
    int aux;        // valor que guarda a função
    int key_search; // Chave a ser encontrada

    dado T[20];

    // Tamanho da tabela de
    cin >> m;

    // Inserindo o valor das chaves
    for (i = 0; i < m; i++)
    {
        T[i].k = -1;     // Valores de K igual a -1
        T[i].status = 0; /* todos status iguais a 0 indicando que esta vazio*/
    }

    // Ler chaves e inserir na tabela
    cin >> k;
    while (k != 0)
    {
        hash_insert(T, m, k);
        cin >> k;
    }

    // Inserindo a chave a ser procurada
    cin >> key_search;

    // chamando a função
    aux = hash_search(T, m, key_search);
    // Mostrando resultados
    if (aux == -1)
        cout << "Chave " << key_search << " nao encontrada";
    else
        cout << "Chave " << key_search << " encontrada na posicao " << aux << endl;

    return 0;
}