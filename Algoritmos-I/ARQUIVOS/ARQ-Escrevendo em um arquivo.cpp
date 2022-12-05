#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream arq; //handle para arquivo a ser escrito
    ifstream file; //handle para arquivo a ser lido
    char nomeArq[50]; //nome do arquivo
    float num;        //números digitados
    float number[1000];
    int n = 0;        //quantidade de números

    //lendo o arquivo e o valor de entrada
    cin.getline(nomeArq, 50);

    //Abrindo o arquivo para escrita
    arq.open(nomeArq, ofstream::out);
    cin >> num;

    //Enquanto não for EOF
    while (num != 0)
    {
        arq << num << endl;
        cin >> num;
        n++;
    }
    arq.close();

    //Abrindo arquivo para leitura
    file.open(nomeArq, ifstream::in);

    //mostrando dados armazenados
    while(!file.eof())
    {
        file >> num;
        cout << num << endl;
    }

    //Fechando o arquivo totalmente
    file.close();

    return 0;
}