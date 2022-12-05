#include <iostream>
using namespace std;

struct Num
{
    int sorte; //números de dentro do vetor
};
int main()
{//entrando com a struct e o tamanho do vetor
    struct Num dig[10];

    int X;
    int soma = 0; //soma dos X números
    int i; //contador for
    
    cin >> X;
    for( i = 0; i < X; i++)
    {
        cin >> dig[i].sorte;
        //verificando se o número é par e somando caso seja
        if(dig[i].sorte % 2 == 0)
        {
            soma += dig[i].sorte;
        }
    }
    //exibindo resultado da soma
    cout << soma << endl;
    return 0;
}
