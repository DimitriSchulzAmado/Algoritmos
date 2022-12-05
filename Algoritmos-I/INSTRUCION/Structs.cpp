/*
    STRUCTS
    uma struct é uma super variável, que tem várias variáveis,
    possivelmente de tipos diferentes, dentro dela. 

    1- estrutura
    2- Vetor com a estrutura
*/

#include <iostream>
using namespace std;

//declarando a nova struct
struct dados
{
    int idade;  //idade do atleta
    float peso; //peso do atleta
};

int main()
{
    dados atleta; //dados de um atleta

    /*
    atleta.idade = 18;
    atleta.peso = 65.7;
    */

    //lendo idade e peso do atleta
    cin >> atleta.idade;
    cin >> atleta.peso;
    //mostrando idade e peso do atleta
    cout << "Idade: " << atleta.idade << endl;
    cout << "Peso: " << atleta.peso << endl;

    return 0;
}

//---------------------------------------------------------------------------
//VETOR
#include <iostream>
using namespace std;

//declarando a nova struct
struct dados
{
    int idade;  //idade do atleta
    float peso; //peso do atleta
};

int main()
{
    dados atleta[3]; //dados de todos os atletas
    int menor = 0;   //menor peso do atleta
    int idadeNovo;
    int posNovo;
    /*
    atleta[0].idade = 18;
    atleta[0].peso = 65.7;
    */

    //lendo idade e peso dos atletas
    for (int i = 0; i < 3; i++)
    {
        cin >> atleta[i].idade;
        cin >> atleta[i].peso;
    }
    //verificando o peso do atleta mais novo
    idadeNovo = atleta[0].idade;
    posNovo = 0;
    for (int i = 0; i < 3; i++)
    {
        if (atleta[i].idade < idadeNovo)
        {
            idadeNovo = atleta[i].idade;
            posNovo = i;
        }
    }
    cout << "Peso do atleta mais novo: " << atleta[posNovo].peso << endl;

    //mostrando idade e peso dos atletas
    // Mostrar a idade e o peso dos 3 atletas
    for (int i = 0; i < 3; i++)
    {
        cout << "idade do atleta " << i + 1 << ": ";
        cout << atleta[i].idade << endl;
        cout << "peso do atleta " << i + 1 << ": ";
        cout << atleta[i].peso << endl;
    }
    return 0;
}
