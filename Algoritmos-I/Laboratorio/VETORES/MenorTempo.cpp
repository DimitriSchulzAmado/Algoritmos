#include <iostream>
using namespace std;

int main()
{
    int N; // numero de atletas
    int tempo[100]; //tempo de cada atleta
    int menor; //menor tempo
    int pmenor; // posição em que o menor tempo se encontra no vetor
    int i; // contador

    // lendo o numero de atletas
    cin >> N;
    //lendo o tempo de cada atleta
    for(i = 0; i < N; i++)
        cin >> tempo[i];
    //determinando a posição do menor tempo
    menor = tempo[0];
    pmenor = 0; 
    for(i = 1; i < N; i++)
        if(tempo[i] < menor){
            menor = tempo[i];
            pmenor = i;
        }
    //apresentar a solução
    cout << "Menor tempo: " << menor << endl;
    cout << "Numero do atleta: " << pmenor << endl;

    return 0;
}