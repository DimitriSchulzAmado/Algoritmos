#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> pilha; // ponteiro para pilha
    int x; // var aux para leitura dos dados

    //Ler dados e inserir na pilha
    pilha.push_front(2);
    pilha.push_front(1);
    pilha.push_front(3);

    // Remover os dados da pilha e ir mostrando
    while(!pilha.empty()) // Para saber se a pilha esta vazia ou não
    {
        x = *pilha.begin(); // ponteiro que aponta pro primeiro no da lista
        cout << x << endl;
        pilha.pop_front(); //Tira o elemento do inicio da fila
    }
    return 0;
}