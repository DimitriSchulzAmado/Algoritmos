#include <iostream>
using namespace std;

int main()
{
    int n; //quantidade de idades
    int idade; //valores das idades gerais
    int aux; //comparador de idades
    int i; //contador do FOR

    //entrando com a quantidade de idades a serem comparadas
    cin >> n;

    for(i = 0; i < n; i++)
    {
            do //criticando as idades
            {
                //idades pedidas
                cin >> idade;
            } while(idade < 0);
            //caso a idade seja maior que a idade passada
            if(idade > aux)
                aux = idade;
    }
    //apresentando a maior idade
    cout << aux << endl;
    return 0;
}