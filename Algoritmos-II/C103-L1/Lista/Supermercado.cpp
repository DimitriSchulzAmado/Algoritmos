#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> est;
    list<int> ved;
    list<int>::iterator p;
    int N; // Número de operações
    int x; // Código do produto
    int op; // Operação
    int aux; // auxilia a pegar o elemento no estoque

    // Entrando com o número de operações
    cin >> N;

    while (N != 0)
    {
        // Definindo cada operação
        cin >> op;

        // Ler o código do produto e colocá-lo no estoque
        if (op == 1)
        {
            cin >> x;
            est.push_back(x);
        }

        // Pegar um elemento do estoque e colocá-lo para venda
        else if (op == 2)
        {
            aux = *est.begin();
            est.pop_front();
            ved.push_front(aux);
        }
        N--;
    }

    // Exibindo estoque de produtos e qual esta disponível para venda
    cout << "Estoque: ";
    for (p = est.begin(); p != est.end(); p++)
        cout << *p << " ";
    cout << endl;

    cout << "Venda: ";
    for (p = ved.begin(); p != ved.end(); p++)
        cout << *p << " ";

    return 0;
}