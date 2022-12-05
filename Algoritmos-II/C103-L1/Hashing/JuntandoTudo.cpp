#include <iostream>
#include <iomanip>
using namespace std;

struct dado
{
    int k;
    int status; // 0: vazio, 1: ocupado
};

// Função aux para o calculo da prosição em que a chave k
int h1(int k, int m)
{
    int h1;
    
    h1 = k % m;
    if (h1 < 0)
        h1 += m;
    return h1;
}

int h2(int k, int m)
{
    int h2;
    
    h2 = 1 + (k % (m - 1));
    if (h2 < 0)
        h2 += m;
    return h2;
}

int hash1(int k, int m, int i)
{
    return (h1(k, m) + (i * h2(k, m))) % m;
}

// Função de inserção de elementos
int hash_insert(dado t[], int m, int k)
{
    int i, j;

    do
    {
        j = hash1(k, m, i);
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

// Função de pesquisa da posição do elemento
int hash_search(dado t[], int m, int k)
{
    int i, j;

    do
    {
        j = hash1(k, m, i);
        if (t[j].k == k)
            return j;
        i++;
    } while (t[j].status != 0 && i < m);
    return -1;
}

// Função de remoção de elementos
int hash_remove(dado t[], int m, int k)
{
    int j;

    j = hash_search(t, m, k);
    if (j != -1)
    {
        t[j].status = 2;
        t[j].k = -1;
        return 0; // consegui remover
    }
    else
        return -1; // k nao esta na tabela
}

int main()
{
    dado T[100];

    int m;
    int option;
    int key;
    int i;
    int j;

    cin >> m;
    for (i = 0; i < m; i++)
    {
        T[i].k = -1;
        T[i].status = 0;
    }

    cin >> option;
    while (option != 5)
    {
        switch(option)
        {
            case 1:
                cin >> key;
                hash_insert(T, m, key);
                break;
        
            case 2:
                cin >> key;
                cout << hash_search(T, m, key) << endl;
                break;
            
            case 3:
                cin >> key;
                hash_remove(T, m, key);
                break;
            
            default:
                for (j = 0; j < m - 1; j++)
                    cout << T[j].k << " ";
                cout << T[j].k << endl;
        }
        cin >> option;
    }
    return 0;
}