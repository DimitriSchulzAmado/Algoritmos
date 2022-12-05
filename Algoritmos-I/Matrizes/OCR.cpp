#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int matriz[100][100];
    int soma;
    int mat0[5][3] = {{0, 0, 0}, {0, 1, 0}, {0, 1, 0}, {0, 1, 0}, {0, 0, 0}};
    int mat1[5][3] = {{1, 1, 0}, {1, 1, 0}, {1, 1, 0}, {1, 1, 0}, {1, 1, 0}};
    int mat2[5][3] = {{0, 0, 0}, {1, 1, 0}, {0, 0, 0}, {0, 1, 1}, {0, 0, 0}};
    int mat3[5][3] = {{0, 0, 0}, {1, 1, 0}, {0, 0, 0}, {1, 1, 0}, {0, 0, 0}};
    int mat4[5][3] = {{0, 1, 0}, {0, 1, 0}, {0, 0, 0}, {1, 1, 0}, {1, 1, 0}};
    int mat5[5][3] = {{0, 0, 0}, {0, 1, 1}, {0, 0, 0}, {1, 1, 0}, {0, 0, 0}};
    int mat6[5][3] = {{0, 0, 0}, {0, 1, 1}, {0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
    int mat7[5][3] = {{0, 0, 0}, {1, 1, 0}, {1, 1, 0}, {1, 1, 0}, {1, 1, 0}};
    int mat8[5][3] = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
    int mat9[5][3] = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}, {1, 1, 0}, {1, 1, 0}};

    while (true)
    {
        int zero = 0, um = 0, dois = 0, tres = 0, quatro = 0, cinco = 0, seis = 0, sete = 0, oito = 0, nove = 0;  

        soma = 0;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> matriz[i][j];
                soma = soma + matriz[i][j];
            }
        }
        if (soma == 0)
            return 0;

        // Comparando a matriz
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (matriz[i][j] == mat0[i][j])
                    zero++;

                if (matriz[i][j] == mat1[i][j])
                    um++;

                if (matriz[i][j] == mat2[i][j])
                    dois++;

                if (matriz[i][j] == mat3[i][j])
                    tres++;

                if (matriz[i][j] == mat4[i][j])
                    quatro++;

                if (matriz[i][j] == mat5[i][j])
                    cinco++;

                if (matriz[i][j] == mat6[i][j])
                    seis++;

                if (matriz[i][j] == mat7[i][j])
                    sete++;

                if (matriz[i][j] == mat8[i][j])
                    oito++;

                if (matriz[i][j] == mat9[i][j])
                    nove++;
            }
        }

        // Comparando e exibindo os resultados
        if (zero == 15)
            cout << "ZERO" << endl;

        else if (um == 15)
            cout << "UM" << endl;

        else if (dois == 15)
            cout << "DOIS" << endl;

        else if (tres == 15)
            cout << "TRES" << endl;

        else if (quatro == 15)
            cout << "QUATRO" << endl;

        else if (cinco == 15)
            cout << "CINCO" << endl;
        
        else if (seis == 15)
            cout << "SEIS" << endl;
        
        else if (sete == 15)
            cout << "SETE" << endl;
        
        else if (oito == 15)
            cout << "OITO" << endl;
        
        else if (nove == 15)
            cout << "NOVE" << endl;
    }
    return 0;
}