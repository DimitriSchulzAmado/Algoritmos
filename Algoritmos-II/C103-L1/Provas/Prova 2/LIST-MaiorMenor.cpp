#include <iostream>
#include <list>
using namespace std;

void maiorMenor(list<int> lista, int &menor, int &maior)
{
    int x; // Valores vindos da main

    while(!lista.empty())
    {
        x = *lista.begin();

        // Achando o maior e o menor valor
        if (x > maior)
            maior = x;

        if (x < menor)
            menor = x;

        lista.pop_front();
    }

    // Exibindo o menor e maior valor, respectivamente
    cout << "menor: " << menor << endl;
    cout << "maior: " << maior << endl;
}

int main()
{
    list<int> lista;
    int x;              // Valores que preenchem a lista
    int maior = -10000; // Maior numero da pilha
    int menor = 99999;  // Menor numero da pilha

    // Entrando com os elementos
    cin >> x;
    while (x != 0)
    {
        lista.push_front(x);
        cin >> x;
    }
    
    // Chamando a função
    maiorMenor(lista, menor, maior);

    return 0;
}