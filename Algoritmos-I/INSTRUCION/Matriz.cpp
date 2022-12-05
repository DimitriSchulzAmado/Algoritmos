#include <iostream>
using namespace std;

int main()
{
    int mat[2][3];    //matriz
    int nLinhas = 2;  //número de linhas
    int nColunas = 3; //número de colunas
    int l, c;         //contadores

    mat[0][0] = 12;
    mat[0][1] = 24;
    mat[0][2] = 37;
    mat[1][0] = 23;
    mat[1][1] = -2;
    mat[1][2] = 15;

    // Mostrando a primeira linha
    cout << "Primeira coluna: " << endl;
    l = 0;
    for (c = 0; c < nColunas; c++)
        cout << mat[l][c] << " ";
    cout << endl;
    

    // Mostrando as colunas
    cout << "Segunda coluna: " << endl;
    c = 1;
    for (l = 0; l < nLinhas; l++)
        cout << mat[l][c] << " ";
    cout << endl;

    // Mostrando a matriz por linhas
    cout << "Mostrando a matriz por linhas: " << endl;
    for(l = 0; l < nLinhas; l++)
    {
        for(c = 0; c < nColunas; c++)
            cout << mat[l][c] << " ";
        cout << endl;
    }

    // Mostrando a matriz por colunas
    cout << "Mostrando a matriz por colunas: " << endl;
    for(c = 0; c < nColunas; c++)
    {
        for(l = 0; l < nLinhas; l++)
            cout << mat[l][c] << " ";
        cout << endl;
    }
    return 0;
}