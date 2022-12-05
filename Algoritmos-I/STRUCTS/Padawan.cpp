#include <iostream>
#include <iomanip>
using namespace std;

struct dados
{
    char name[100]; //nome completo
    int point;      //pontuação do Padawan
};

int main()
{
    dados Padawan[100];

    int Num;        //numero de padawans
    int maior = 0;  //maior pontuação
    float media;    //media dos pontos
    float soma = 0; //soma das pontuações

    cin >> Num;
    //entrando com os dados do padawan
    for (int i = 0; i < Num; i++)
    {
        cin.ignore();
        cin.getline(Padawan[i].name, 100);
        cin >> Padawan[i].point;
    }
    //calculando a media
    for (int i = 0; i < Num; i++)
        soma += Padawan[i].point;
    media = soma / Num;
    //vendo qual é o padawan com mais ponto e a media deles
    maior = Padawan[0].point;
    int id = 0;
    for (int i = 0; i < Num; i++)
    {
        if (Padawan[i].point > maior)
        {
            maior = Padawan[i].point;
            id = i;
        }
    }
    //saida de dados
    cout << "Padawan com mais pontos: " << Padawan[id].name << endl;
    cout << "Pontos: " << maior << endl;
    cout << fixed << setprecision(2);
    cout << "Media da turma: " << media << " pontos" << endl;
    return 0;
}