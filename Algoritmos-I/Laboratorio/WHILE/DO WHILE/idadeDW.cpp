#include <iostream>
using namespace std;

int main()
{

    int idade;
    int N = 0;
    do
    {
        cin >> idade;
        if (idade < 7 && idade >= 0)
            N++;

    } while (idade >= 0);
    cout << N << endl;
    return 0;
}