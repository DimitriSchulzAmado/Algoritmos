#include <iostream>
#include <fstream> //biblioteca para trabalhar com arquivsos
using namespace std;

int main()
{
    ifstream arq; //handle para leitura do arquivo
    int x;

    arq.open("dados.txt", ifstream::in);
    while (!arq.eof()) //enquanto não chegar no final do arquivo
    { //.eof = end of file
        arq >> x;
        cout << "x = " << x << endl;
    }

    arq.close();

    return 0;
}

//======================================================================

#include <iostream>
#include <fstream> //biblioteca para trabalhar com arquivsos
using namespace std;

int main()
{
    ifstream arq;     //handle para leitura do arquivo
    char nomeArq[50]; //nome do arquivo
    int x[10];        //armazena os valores do arquivo
    int n;            //número de elementos recebidos
    int i;            //contador

    //Lendo o nome do arquivo
    cin.getline(nomeArq, 50);

    //Abrindo arquivo para leitura
    arq.open(nomeArq, ifstream::in);

    i = 0;
    while (!arq.eof()) //enquanto não chegar no final do arquivo
    { //.eof = end of file
        arq >> x[i];
        i++;
    }
    n = i;

    //mostrando dados armazenados
    for (i = 0; i < n; i++)
        cout << x[i] << " ";
    cout << endl;

    //Fechando o arquivo
    arq.close();

    return 0;
}