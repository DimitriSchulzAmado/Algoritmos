#include <iostream>
using namespace std;
//void
int main()
{
    int G, I;                                  //gols marcados pelos times
    int ask;                                   // opções de resposta para o novo grenal
    int VitI = 0, VitG = 0, Emp = 0, conf = 1; // vitorias do inter && vitorias do gremio && empates && confronto

    //entrando com os dados
    cin >> I >> G;

    //calculando as vitórias ou derrotas do confronto
    //caso o Gremio tenha ganhado
    if (G > I)
        VitG = VitG++;
    //caso o Inter tenha ganhado
    else if (G < I)
        VitI = VitI++;
    //caso nenhum dos dois tenha ganhado
    else
        Emp = Emp++;

    cout << "Novo grenal (1-sim 2-nao)" << endl; // primeira pergunta do grenal
    cin >> ask;                                  // resposta do novo grenal

    while (ask == 1)
    {
        cin >> I >> G;
        //calculando as vitórias ou derrotas do confronto
        //quantidade de confrontos
        if (ask == 1)
            conf = conf++;
        //caso o Gremio tenha ganhado
        if (G > I)
            VitG = VitG++;
        //caso o Inter tenha ganhado
        else if (G < I)
            VitI = VitI++;
        //caso nenhum dos dois tenha ganhado
        else
            Emp = Emp++;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> ask;
    }

    if (ask == 2)
    {
        //apresentando os resultados dos confrontos
        cout << conf << " grenais" << endl;
        cout << "Inter:" << VitI << endl;
        cout << "Gremio:" << VitG << endl;
        cout << "Empates:" << Emp << endl;

        if (VitG > VitI)
            cout << "Gremio venceu mais" << endl;
        else if (VitG < VitI)
            cout << "Inter venceu mais" << endl;
        else
            cout << "Nao houve vencedor" << endl;
    }
    return 0;
}