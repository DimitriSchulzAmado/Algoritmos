#include <iostream>
using namespace std;

int main()
{
    int N;            //tamanho do vetor
    int valores[100]; //números guardados dentro do vetor
    int qtd = 0;      //quantidade de números negativos

    //entrando com a quantidade de valores;
    cin >> N;
    //entrando com valores de N
    for (int i = 0; i < N; i++){
        cin >> valores[i];
        if (valores[i] < 0)
        {
            valores[i] = 0;
            qtd++;
        }
    }
    //imprimindo resultado
    for (int i = 0; i < N; i++)
        cout << valores[i] << " ";

    cout << endl;
    cout << qtd;
    return 0;
}
