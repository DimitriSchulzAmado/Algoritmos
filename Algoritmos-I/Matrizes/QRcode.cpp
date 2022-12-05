#include <iostream>
using namespace std;

int main()
{
    int mat[3][3]; //matriz quadrada
    int soma = 0;
    int mat_masc[3][3] = {{1,1,1},
                          {0,1,0},
                          {0,0,1}};
    int mat_fem[3][3] = {{1,0,0},
                         {1,1,0},
                         {1,0,0}};

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            cin >> mat[i][j];
    }

     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(mat[i][j] == mat_masc[i][j])
                soma++;
        }
    }
    if(soma == 9)
        cout << "MASCULINO" << endl;
    else
        cout << "FEMININO" << endl;
    return 0;
}