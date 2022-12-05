#include <iostream>
using namespace std;

float media(float *a, float *b, float *media)
{
    //calculando a media e retornando o valor
    *media = (*a + *b) / 2;
}

int main()
{
    float n1, n2; //notas do aluno
    float res;    //media total

    //ler as duas notas de um aluno
    cin >> n1 >> n2;

    //chamando a função
    media(&n1, &n2, &res);

    //mostrando resultados
    cout << res << endl;

    return 0;
}