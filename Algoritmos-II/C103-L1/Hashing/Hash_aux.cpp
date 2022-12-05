#include <iostream>
using namespace std;

int hash_aux(int k, int m)
{
    int aux = 0;
    aux = k % m;
    if(aux < 0)
        aux += m;
    return aux;
}

int main()
{
    int k, m;
    int h;

    cin >> k >> m;
    while (k != 0 && m != 0)
    {
        h = hash_aux(k, m);
        cout << h << endl;
        cin >> k >> m;
    }

    return 0;
}