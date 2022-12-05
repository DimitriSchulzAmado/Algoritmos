#include <iostream>
using namespace std;

int traco(int mat[][10], int dim)
{
    int soma = 0;
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
            if(i == j)
                soma += mat[i][j];
    }
    return soma;
}

int main()
{
    int mat[10][10]; // Mat quadrada menor que 10
    int N;           // Tamanho da matriz
    int traco_mat;   // Resultado do traço da mat quadrada

    cin >> N;

    //preenchendo a matriz quadrática
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cin >> mat[i][j];
    }
    traco_mat = traco(mat, N);
    cout << "traco = " << traco_mat << endl;

    return 0;
}