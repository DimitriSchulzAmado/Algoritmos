#include <iostream>
using namespace std;

struct dados
{
    char nome[100];
    int n1;
    int n2;
    int n3;
    int n4;
};
int strongest(dados atleta[], int nAtletas)
{
    int i; //contador
    int soma = 0;
    int maior = 0; //maior 
    int pm; //posição do vencedor

    for(i = 0; i < nAtletas; i++)
    {
        soma += atleta[i].n1 + atleta[i].n2 + atleta[i].n3 + atleta[i].n4;
        if(soma > maior)
        maior = soma;
        pm = i;
    }
    return pm;
}

int main()
{
    struct dados atleta[100];

    int N; //Número de atletas
    int pm;

    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin.ignore();
        cin.getline(atleta[i].nome, 100);
        cin >> atleta[i].n1 >> atleta[i].n2 >> atleta[i].n3 >> atleta[i].n4;
    }

    pm = strongest(atleta, N);
    cout << "Vencedor: " << atleta[pm].nome << endl;
    return 0;
}