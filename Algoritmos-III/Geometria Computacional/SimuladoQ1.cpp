#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

//              texto/padrao/tam texto/tam padrao/cardinalidade/num primo
void rabin_karp(char T[], char P[], int tamT, int tamP, int d, int q) //! d = Cardinalidade
{                                                                     //    = qtd de caracteres diferentes

    int h;     // valor utilizado para calculo de hash
    int p = 0; // padrao convertido para inteiro
    int t = 0; // texto convertido para inteiro
    
    for (int i = 0; i < tamP; i++)
    {
        p = (d * p + (P[i] - '0')) % q; // converte o padrao
        t = (d * t + (T[i] - '0')) % q; // converte o texto para o primeiro valor (t0)
    }

    //! so iremos comparar a STRING, se o valor de hash for igual!!!
    h = (int)pow(d, tamP - 1) % q; // utilizado para calculo de hash

    for (int i = 0; i <= tamT - tamP; i++)
    {
        if (p == t) // Se encontrei um valor de hash valido
        {
            // Verifico se ha diferencas
            int j;
            for (j = 0; j < tamP; j++)
            {
                if (P[j] != T[i + j])
                {
                    break;
                }
            }

            if (j == tamP)
                cout << "pule o episodio " << i << endl;
        }

        if (i < tamT - tamP) // se ainda nao cheguei no final
        {
            t = (d * (t - (T[i] - '0') * h) + (T[i + tamP] - '0')) % q; // atualizo o ti para ti+1
            if (t < 0) // se o valor de t calculado for negativo, deve-se somar q
                t += q;
        }
    }
}

int main()
{
    char T[100]; // texto
    char P[100] = "mar"; // padrao
    int N;       // tam do texto
    int M = 30;  // padrao
    int i;       // contador for
    int d = 10;  // Cardinalidade -> qtd de caracteres diferentes
    int q = 13;  // Valor primo grande. Sera usado para calcular o valor de hash
    int ep; // qual episodio pular

    // DATA INPUT
    cin >> N;
    if(N > 0 && N < 100)
    {
        cin.ignore();
        for(i = 0; i < N; i++)
            cin.getline(T, M);
    }
    // FUNCTION CALL
    rabin_karp(T, P, N, M, d, q);
    

    return 0;
}