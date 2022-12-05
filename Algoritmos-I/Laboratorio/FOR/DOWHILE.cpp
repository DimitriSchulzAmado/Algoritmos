#include <iostream>
using namespace std;

int main()
{

    int idade;

    do
    {
        cout << "Digite sua idade" << endl;
        cin >> idade;
        cout << "Sua idade: " << idade << endl;
    } while (idade >= 0);

    return 0;
}