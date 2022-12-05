#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int N;
    float x[100], y[100], z[100];
    float media;
    
    //ler numero de casos de teste
    cin >> N;
    //casos de teste
    for(int i = 0; i < N; i++)
    {
        cin >> x[i] >> y[i] >> z[i];
    }
    //calculando a media
    for(int i = 0; i < N; i++)
    {
        media = ((x[i] * 2)+(y[i] * 3)+(z[i] * 5)) / 10;
        //exibindo resultados
        cout << fixed << setprecision(1);
        cout << media << endl;
    }
    return 0;
}