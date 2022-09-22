#include <iostream>
#include <cstring>
using namespace std;
void calcula_LPS(int lps[], char P[], int tamP)
{
    int tam = 0; // caso base
    lps[0] = 0;  // caso base

    // o loop calcula lps[i] para i=1 ate tamP-1

    int i = 1;
    while (i < tamP)
    {
        if (P[i] == P[tam]) // se encontrar uma letra que bate tanto como um prefixo quanto como sufixo
        {
            tam++;        // aumento o tamanho do maior prefixo que tambem eh sufixo
            lps[i] = tam; // salvo o valor pra esse prefixo
            i++;          // vou para o proximo prefixo
        }
        else // (p[i] != p[tam]) se encontrar uma letra que nao bate como sufixo e prefixo
        {
            if (tam != 0) // se o tamanho do maior prefixo que tambem eh sufixo atual for diferente de 0
            {
                tam = lps[tam - 1]; // volto pro maior prefixo que tambem eh sufixo considerando o prefixo anterior
            }
            else // se o tamanho do maior prefixo que tambem eh prefixo agora val 0
            {
                lps[i] = 0; // o maior prefixo que tambem eh prefixo agora vale 0
                i++;        // proximo prefixo
            }
        }
    }
}
bool kmp(char T[], char P[], int tamT, int tamP)
{
    int NEpisodio = 0; // numero do episodio que sera pulado
    int lps[tamP];     // vetor que indica para onde voltarei no padrao quando ocorrer um missmatch
    // lps -> indica o tamanho do maior sufixo de p[0...i] que tambem eh sufixo (exceto a string inteira)

    calcula_LPS(lps, P, tamP);
    int j = 0; // j e o tamanho do meu match atual, onde eu estou no meu padrao
    int i = 0; // posicao no texto

    while (i < tamT)
    {
        if (T[i] == P[j]) // match
        {
            j++;
            i++;
            if (j == tamP) // encontrei o padrao no texto na posicao (i-tamP) ate i
            {

                j = lps[j - 1];
                return true;
            }
        }
        else // missmatch
        {
            if (j != 0) // se ocorreu missmatch depois de j matchs
                j = lps[j - 1];
            else // missmatch na comparacao da primeira lera
                i++;
        }
    }
    return false;
}
int main()
{
    // usar o cin apenas para string sem espaco,se for com espaco tem q usar cin.getline, e se houver a entrada de um valor numerico antes, colocar cin.ignore(); antes do getline
    // strlen(a) calcula o tamanho da string, strcpy(a,b) copia oq tem em b e passa p a, strcmp(a,b) compara as duas strings
    int N;      // numero de episodios
    char T[30]; // t texto

    cin >> N;

    cin.ignore();

    for (int i = 1; i <= N; i++)
    {
        cin.getline(T, 30);
        if (kmp(T, "mar", strlen(T), 3))
            cout << "pule o episodio " << i << endl;
        cout << endl;
    }

    return 0;
}