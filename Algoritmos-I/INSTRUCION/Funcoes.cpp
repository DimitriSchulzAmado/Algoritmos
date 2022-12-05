/* 
    FUNÇÕES

    1 - Função base
    2 - Função com vetor
*/

#include <iostream>
using namespace std;

int soma(int a, int b)
{
    int s; //a + b

    s = a + b;
    return s;
}

int main()
{
    int x, y; //operandos
    int res; //x + y

    cin >> x >> y;
    res = soma(x, y);
    cout << res << endl;
    return 0;
}

//-------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int maior(int idades[], int nPessoas)
{
    int m; //maior idade
    int i;

    m = -1;
    for(i = 0; i< nPessoas; i++)
        if(idades[i] > m)
            m = idades[i];
    return m;
}

int main()
{
    int idades[4]; //armazena as idades das pessoas
    int i; //contador
    int maior_Idade; //Idade da pessoa mais velha

    //Lendo as idades
    for(i = 0; i < 4; i++)
    {
        cin >> idades[i];
    }
    //Verificando a idade da pessoa mais velha
    maior_Idade = maior(idades, 4);

    //Mostrando a maior idade
    cout << "Maior idade: " << maior_Idade << endl;
    return 0;
}