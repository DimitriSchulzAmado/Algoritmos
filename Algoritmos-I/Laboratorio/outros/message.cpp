#include <iostream>
using namespace std;
int main()
{
    int Choices;               //escolha do usuario
    int NumVacas = 0;          //numero de vacas
    int option = 0;            //opções do menu
    double media;              //media final
    double MediaGuia = 0;      //guia pra media total
    double MediaTotal = 0;     //media total
    double SomaManhaTarde = 0; //soma manha tarde
    double MaiorQtdTarde = 0;  //maior qtd de tarde
    double MaiorQtdManha = 0;  //maior qtd de manhã
    double MenorAM = 100;      //menor qtd manha
    double MenorPM = 100;      //menor qtd tarde
    double LitrosAM;           //litros de manha
    double LitrosPM;           //litros de tarde
    char nome[50];
    do
    {
        cout << "\n Tarefas\n"
             << endl;
        cout << " 1 Cadastrar a vaca " << endl;
        cout << " 2 Status da vaca " << endl;
        cout << " 3 Media total de litros de todas as vacas" << endl;
        cout << " 4 Maior quantidade de litros tirado(manha/tarde)" << endl;
        cout << " 5 Menor quantidade de litrs tirado(manha/tarde)" << endl;
        cout << "-1 Sair" << endl;
        cin >> Choices; //leitura da escolha do usuario
        if (Choices == -1)
            option = -1;

        switch (Choices)
        {       //menu
        case 1: //cadastro da nova vaca
            cin.ignore();
            cout << "Digite o nome da vaca: ";
            cin.getline(nome, 50);
            cout << "Quantidade de litros tirado de manha : ";
            cin >> LitrosAM;
            cout << "de tarde: ";
            cin >> LitrosPM;

            NumVacas++;
            SomaManhaTarde = (LitrosAM + LitrosPM);
            MediaGuia = MediaGuia + SomaManhaTarde; //preparacao pra media total

            if (LitrosAM >= MaiorQtdManha) //comparação da maior quantidade de manha
                MaiorQtdManha = LitrosAM;
            if (LitrosAM <= MenorAM) //comparação da menor quantidade de manha
                MenorAM = LitrosAM;
            if (LitrosPM >= MaiorQtdTarde) //comparacao da maior quantidade de tarde
                MaiorQtdTarde = LitrosPM;
            if (LitrosPM <= MenorPM) //comparacao da menor quantidade de tarde
                MenorPM = LitrosPM;
            break;
        case 2:
            media = (SomaManhaTarde) / 2; //media de leite da ultima vaca
            cout << "Rendimento da vaca: " << nome << endl;
            if (media >= 1 && media <= 4)
            { //avaliando rendimento
                cout << "Rendimento baixo" << endl;
            }
            else if (media > 4 && media <= 7)
            {
                cout << "Rendimento medio" << endl;
            }
            else if (media > 7 && media <= 10)
            {
                cout << "Rendimento alto" << endl;
            }
            break;
        case 3:
            MediaTotal = MediaGuia / NumVacas; //calculo da media total
            cout << "Media total: " << MediaTotal << " l" << endl;
            break;
        case 4:
            cout << "Maior qtd de litros de leite(manha/tarde)" << endl;
            cout << "Manha: " << MaiorQtdManha << endl;
            cout << "Tarde: " << MaiorQtdTarde << endl;
            break;
        case 5:
            cout << "Menor qtd de litros de leite(manha/tarde)" << endl;
            cout << "Manha: " << MenorAM << endl;
            cout << "Tarde: " << MenorPM << endl;
            break;
        }
    } while (option != -1);
    return 0;
}