#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lista; // ponteiro para a lista
    list<int>::iterator p; //iterador para varrer a lista
    int soma; // soma dos elementos da lista
    
    // Inserindo elementos na lista
    lista.push_front(2);
    lista.push_front(1);
    lista.push_front(3);

    // Mostrando a lista
    for(p = lista.begin(); p != lista.end(); p++) 
        cout << *p << " ";
    cout << endl;

    // Soma dos elementos da lista
    soma = 0;
    for (p = lista.begin(); p != lista.end(); p++)
        soma = soma + *p;
        
    cout << "soma = " << soma << endl;
    return 0;
}