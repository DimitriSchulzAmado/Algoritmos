#include <iostream>
using namespace std;
//void
int main()
{
    int G, I;                                  //gols marcados pelos times
    int ask;                                   // opções de resposta para o novo grenal
    int VitI = 0, VitG = 0, Emp = 0, conf = 0; // vitorias do inter && vitorias do gremio && empates && confronto

    do
    {
        //entrando com os dados
        cin >> I >> G;
        //caso o Gremio tenha ganhado
        if (G > I)
            VitG = VitG + 1;
        //caso o Inter tenha ganhado
        else if (G < I)
            VitI = VitI + 1;
        //caso nenhum dos dois tenha ganhado
        else
            Emp = Emp + 1;

        conf = conf + 1;
        cout << "Novo grenal (1-sim 2-nao)" << endl; // primeira pergunta do grenal
        cin >> ask;                                  // resposta do novo grenal
    } while (ask == 1);

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