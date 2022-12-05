#include <iostream>
using namespace std;

//são associados a estruturas de repetição
int main()
{
    int idade[5]; //armazena a idade de 5 pessoas
    int i; //contador

    for(i = 0; i < 5; i++)
        cin >> idade[i];
    
    for(i = 0; i < 5; i++)
        cout << idade[i] << endl;

    return 0;
}