#include <iostream>
#include <cmath>
#include <iomanip>

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

float escalar(vetor A, vetor B)
{
    float e;
    e = A.x * B.x + A.y * B.y;
    return e;
}

float area_triangulo(ponto A, ponto B, ponto C)
{
    vetor AB;
    vetor AC;
    float area;
    AB = cria_vetor(A, B);
    AC = cria_vetor(A, C);
    area = fabs(vetorial(AB, AC)) / 2;
    return area;
}

int main()
{
    // variaveis IN
    int T1, T2; // Traves do gol
    int B;      // Bola

    //ENTRADAS
    cin >> T1 >> T2 >> B;
    
    return 0;
}
