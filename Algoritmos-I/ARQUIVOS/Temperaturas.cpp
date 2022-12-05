#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    ifstream arq;    //Handle para leitura do arquivo
    float temp[100]; //Armazena os valores do arquivo "temperaturas.txt"
    float soma = 0;  //Soma das temperaturas
    float media;     //Media das temperaturas
    int n;           //Número de elementos recebidos
    int i;           //Contador

    //Abrindo arquivo para leitura
    arq.open("temperaturas.txt", ifstream::in);

    //Lendo os dados do arquivo "temperaturas.txt"
    i = 0;
    while (!arq.eof())
    {
        arq >> temp[i];
        i++;
    }
    n = i;

    //Calculando a media
    for (i = 0; i < n; i++)
    {
        soma += temp[i];
        media = soma / n;
    }
    //Mostrando a media
    cout << fixed << setprecision(1);
    cout << "Temperatura media: " << media << " graus" << endl;

    //Fechando o arquivo
    arq.close();

    return 0;
}