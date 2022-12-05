#include <iostream>
using namespace std;

struct tempo
{
    int Hora_inicio;
    int final;
    int minuto_inicio, minuto_final;
    int tempo_horatotal, tempo_minutototal;
};

int main()
{
    struct tempo jogo;

    //lendo os tempos de inicio e de fim
    cin >> jogo.Hora_inicio >> jogo.minuto_inicio >> jogo.final >> jogo.minuto_final;

    //calculando tempo total do jogo
    jogo.tempo_horatotal = jogo.final - jogo.Hora_inicio;

    if (jogo.tempo_horatotal < 0)
        jogo.tempo_horatotal = 24 + (jogo.final - jogo.Hora_inicio);

    jogo.tempo_minutototal = jogo.minuto_final - jogo.minuto_inicio;
    if (jogo.tempo_minutototal < 0)
    {
        jogo.tempo_minutototal = 60 + (jogo.minuto_final - jogo.minuto_inicio);
        jogo.tempo_horatotal--;

        if(jogo.tempo_horatotal < 0)
            jogo.tempo_horatotal += 24;
    }

    //Se o jogo durou 24 horas
    if (jogo.Hora_inicio == jogo.final && jogo.minuto_inicio == jogo.minuto_final)
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;

    //Tempo de duração do jogo
    else
        cout << "O JOGO DUROU " << jogo.tempo_horatotal << " HORA(S) E " << jogo.tempo_minutototal << " MINUTO(S)" << endl;

    return 0;
}