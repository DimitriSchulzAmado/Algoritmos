#include <iostream>
using namespace std;

struct dados
{
    int Data;                    // Dia do mês no qual o evento vai começar
    int hora, min, seg;          // hh : mm : ss (inicial)
    int DataFim;                 // Dia do mês no qual o evento vai terminar
    int horaFim, minFim, segFim; // hh : mm : ss (final)
};

void duracao(int datac, int hc, int mc, int sc, int dataf, int hf, int mf, int sf)
{   
    int dias = 0, horas = 0, minutos = 0, segundos = 0;

    dias = dataf - datac;
    horas = hf - hc;
    minutos = mf - mc;
    segundos = sf - sc;

    if (horas < 0)
    {
        horas += 24;
        dias--;
    }

    if (minutos < 0)
    {
        minutos += 60;
        horas--;
    }

    if (segundos < 0)
    {
        segundos += 60;
        minutos--;
    }

    cout << dias << " dia (s)" << endl; 
    cout << horas << " hora (s)" << endl;
    cout << minutos << " minuto (s)" << endl;
    cout << segundos << " segundos (s)" << endl;
}

int main()
{
    struct dados mes;

    //Lendo a data e o horário do inicio do evento 
    cin >> mes.Data;
    cin >> mes.hora >> mes.min >> mes.seg;

    //Lendo a data e o horário do fim do evento
    cin >> mes.DataFim;
    cin >> mes.horaFim >> mes.minFim >> mes.segFim;

    //Retorno da Função
    duracao(mes.Data, mes.hora, mes.min, mes.seg, mes.DataFim, mes.horaFim, mes.minFim, mes.segFim);

    return 0;
}