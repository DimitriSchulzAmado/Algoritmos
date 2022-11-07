// transforma as duas strings em um hash

#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

//              texto / padrao / tam texto / tam padrao / cardinalidade / num primo / tam
void rabin_karp(char T[], char P[], int tamT, int tamP, int d, int q, int &tam, int &last) //! d=Cardinalidade
{                                                                                        //= qtd de caracteres diferentes

    int h;     // valor utilizado para calculo de hash
    int p = 0; // padrao convertido para inteiro
    int t = 0; // texto convertido para inteiro
    int i; // contadores

    // soma todos os caracteres e gera um unico numero para comparação
    for ( i = 0; i < tamP; i++)
    {
        p = (d * p + (P[i] - '0')) % q; // converte o padrao
        t = (d * t + (T[i] - '0')) % q; // converte o texto para o primeiro valor (t0)
    }

    //! so iremos comparar a STRING, se o valor de hash for igual!!!
    h = (int)pow(d, tamP - 1) % q; // utilizado para calculo de hash


    for (i = 0; i <= tamT - tamP; i++)
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
            {
                tam++;
                last = i;
            }
        }

        // passa para o proximo conjunto de palavras
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
    char P[100]; // padrao
    int N;       // tam do texto
    int M;       // padrao
    int i;       // contador for
    int d = 10;  // Cardinalidade -> qtd de caracteres diferentes
    int q = 13;  // Valor primo grande. Sera usado para calcular o valor de hash
    int tam = 0;
    int last = 0; // contador
    
    // DATA INPUT
    cin >> N >> M;
    cin.ignore();

    cin >> T;
    cin >> P;

    // FUNCTION CALL
    rabin_karp(T, P, N, M, d, q, tam, last);

    if(tam == 0)
        cout << tam << " ocorrencia(s)" << endl;
    else
    {
        cout << "Ultima ocorrencia: " << last << endl;
        cout << tam << " ocorrencia(s)" << endl;
    }
    return 0;
}