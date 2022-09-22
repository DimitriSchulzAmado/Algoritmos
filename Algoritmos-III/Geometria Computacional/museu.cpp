#include <iostream>
#include <iomanip>   // casas decimais
#include <cmath>     // operacoes matematicas
#include <algorithm> // sort
using namespace std;

struct ponto
{
    float x;
    float y;
};
typedef ponto vetor;

vetor cria_vetor(ponto A, ponto B)
{
    vetor AB;
    AB.x = B.x - A.x;
    AB.y = B.y - A.y;
    return AB;
}

float vetorial(vetor A, vetor B)
{
    float v;
    v = A.x * B.y - A.y * B.x;
    return v;
}
/*
Posicao de C em relacao ao segmento AB
1 -> esquerda
-1 -> direita
0 -> colinear
*/
int sentido(ponto A, ponto B, ponto C)
{
    vetor AB;
    vetor AC;
    float vet;
    AB = cria_vetor(A, B);
    AC = cria_vetor(A, C);
    vet = vetorial(AB, AC);
    if (vet > 0)
        return 1;
    else if (vet < 0)
        return -1;
    else
        return 0;
}

int main()
{
    ponto v[10];

    int n;           // qtd de paredes
    int qtd_esq = 0; // contar quantas vezes o ponto ta a esquerda do vetor
    int qtd_dir = 0; // contar quantas vezes o ponto ta a direita do vetor
    int i;           // contador for
    int cont = 0;

    // Entrada da quantidade de paredes
    cin >> n;
    if (n >= 3 && n <= pow(10, 5))
    {
        // coordenadas dos pontos
        for (i = 0; i < n; i++)
            cin >> v[i].x >> v[i].y;

        i = 1;
        while (cont == 0)
        {
            if (v[i].x == v[i - 1].x || v[i].y == v[i - 1].y)
                i++;
            else if (v[i].x > v[i - 1].x || v[i].y > v[i - 1].y)
                cont = 1; // anti horario
        }

        // ligando o ultimo ponto do poligono com o primeiro
        v[i].x = v[0].x;
        v[i].y = v[0].y;

        cin >> v[i + 1].x >> v[i + 1].y;
    }

    // verificar os sentidos
    if (cont == 0)
        for (i = 0; i < n; i++)
        {
            // verificar o sentido usando a camera como ref. fixa
            if (sentido(v[n + 1], v[i], v[i + 1]) == 1)
                qtd_esq++;
        }
    else
        for (i = 0; i < n; i++)
        {
            // verificar o sentido usando a camera como ref. fixa
            if (sentido(v[n + 1], v[i], v[i + 1]) == -1)
                qtd_dir++;
        }

    // Mostrando as saídas dependendo dos valores
    if (cont == 0)
        if (qtd_esq == n)
            cout << "S" << endl;
        else
            cout << "N" << endl;

    if (cont == 1)
        if (qtd_dir == n)
            cout << "S" << endl;
        else
            cout << "N" << endl;

    return 0;
}