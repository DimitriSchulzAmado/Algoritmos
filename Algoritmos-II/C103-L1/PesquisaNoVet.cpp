#include <iostream>
using namespace std;

int main()
{
    int N[100];         //números arquivados
    int X;              //elemento a ser pesquisado
    int aux;            //contador do vetor
    int i;              //contador aux do FOR
    int position;       //posição
    int Y = 0;          //conta a quantidade do vetor
    bool achou = false; // aux para a busca
    //entrando com os números inteiros terminando e preenchendo o vetor
    cin >> aux;
    while (aux != 0)
    {
        N[Y] = aux;
        Y = Y + 1;
        cin >> aux;
    }
    //entrando com o elemento a ser pesquisado
    cin >> X;
    //procurando o valor no vetor
    achou = false;
    for (i = 0; i < Y; i++)
    {
        cin >> X;
        if (X == N[i])
        {
            achou = true;
            position = i;
        }
    }
    if (achou)
        cout << "Elemento " << X << " nao foi encontrado" << endl;
    else
        cout << "Elemento " << X << " encontrado na posicao " << position << endl;
    return 0;
}