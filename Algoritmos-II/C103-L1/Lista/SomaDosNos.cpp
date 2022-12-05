#include <iostream>
#include <list>
using namespace std;

int soma(list<int> lista)
{
    list<int>::iterator p; //iterador para varrer a lista
    int s = 0;
    for (p = lista.begin(); p != lista.end(); p++)
        s += *p;
    return s;
}

int main()
{
    list<int> lista;
    int x;

    // Entrando com os elementos
    cin >> x;
    while(x != 0)
    {
        lista.push_front(x);
        cin >> x;
    }

    // Saindo com a soma
    cout << soma(lista) << endl;

    return 0;
}