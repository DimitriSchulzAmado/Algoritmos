#include <iostream>
#include <list>
using namespace std;

bool encontrar(list<int> lista, int x)
{
    list<int>::iterator p; //iterador para varrer a lista
    int aux = 0; // Variavel para saber se foi encontrado

    for (p = lista.begin(); p != lista.end(); p++)
        if (*p == x)
        {
            aux = 1;
        }
    return aux;
}

int main()
{
    list<int> lista; // pilha é um ponteiro list é uma lista ligada
    int x;
    int search;

    // Entrando com os elementos
    cin >> x;
    while (x != 0)
    {
        lista.push_front(x);
        cin >> x;
    }
    cin >> search;
    
    // Verificando se foi encontrado e mostrando o resultado
    if(encontrar(lista, x) == true)
        cout << "Encontrado" << endl;
    else
        cout << "Nao encontrado" << endl;
    return 0;
}