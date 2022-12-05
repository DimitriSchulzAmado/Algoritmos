#include <iostream>
using namespace std;

int func(int mat[][4], int nLinhas, int nColunas)
{
    int soma = 0;
    
    for (int i = 0; i < nLinhas; i++)
    {
        for (int j = 0; j < nColunas; j++)
            soma += mat[i][j];
    }

    return soma;
}

int main()
{
    int mat[3][4];
    int N = 3; // número de linhas
    int M = 4; // número de colunas
    int soma;  // soma

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cin >> mat[i][j];
    }
    //retorno da função
    soma = func(mat, N, M);

    // Exibindo resultado
    cout << "soma = " << soma << endl;

    return 0;
}