#include <iostream>
using namespace std;

int main()
{
    int mat[100][100];
    int N; // Número de linhas
    int M; // Número de colunas

    cin >> N >> M;

    // Lendo os valores da matriz
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
            cin >> mat[i][j];
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    return 0;
}