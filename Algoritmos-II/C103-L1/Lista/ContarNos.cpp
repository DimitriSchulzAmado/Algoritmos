#include <iostream>
#include <list>
using namespace std;

int contar(list<int> lista)
{
    list<int>::iterator p; //iterador para varrer a lista
    int s = 0; // Quantidade de nós existentes na lista
    for (p = lista.begin(); p != lista.end(); p++)
        s += 1;
    return s;
}

int main()
{
    list<int> lista;
    int x;

    // Entrando com os elementos
    cin >> x;
    while (x != 0)
    {
        lista.push_front(x);
        cin >> x;
    }

    // Exibindo a quantidade de nós
    cout << contar(lista) << endl;
    return 0;
}