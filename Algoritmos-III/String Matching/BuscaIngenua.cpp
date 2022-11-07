#include <iostream>
using namespace std;

int main()
{


    for(int i = 0; i <= tamT-tamP; i++)
    {
        for(int j = 0; j < tamP; j++)
        {
            if(T[i+j] != P[j]) // Se houver um mismatch(uma posição)
                break;
            if(j == tamP-1) // Padrao encontrado
                cout << i << endl;
        }
    }
}