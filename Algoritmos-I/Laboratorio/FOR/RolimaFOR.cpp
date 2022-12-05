#include <iostream>
using namespace std;

int main()
{
    int i, N, tempo, menor, pos; //Contador && número de pessoas && tempo de cada pessoa

    cin >> N;

    menor = 10000;
    for (i = 1; i <= N; i++)
    {
        cin >> tempo;
        //caso seja maior que o numero anterior
        if (tempo < menor)
        {
            menor = tempo;
            pos = i;
        }
    }
    cout << pos << endl;
    return 0;
}