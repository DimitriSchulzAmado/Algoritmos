#include <iostream>
using namespace std;

int main()
{
    int mat[100][100];  // Matriz 1
    int mat2[100][100]; // Matriz 2
    int mat3[100][100]; // Matriz 3
    int N;              // Número de linhas
    int M;              // Número de colunas

    cin >> N >> M;

    // Lendo os valores da matriz 1
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cin >> mat[i][j];
    }

    // Lendo os valores da matriz 2
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cin >> mat2[i][j];
    }

    // Somando as matrizes
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            mat3[i][j] = mat[i][j] + mat2[i][j];
    }

    // Apresentando resultado
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cout << mat3[i][j] << " ";
        cout << endl;
    }
    return 0;
}