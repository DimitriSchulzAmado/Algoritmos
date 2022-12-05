#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> fila; // ponteiro para fila
    int x; // var aux para leitura dos dados
    int i; // contador

    //Ler dados e inserir na pilha
    for(i = 0; i < 4; i++)
    {
        cin >> x;
        fila.push_back(x);
    }   

    // Remover os elementos da pilha e ir mostrando
    while(!fila.empty()) // Para saber se a pilha esta vazia ou não
    {
        x = *fila.begin(); // ponteiro que aponta pro primeiro no da lista
        cout << x;
        fila.pop_front(); //Tira o primeiro nó da lista
    }
    return 0;
}