#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> lista;
    list<int> lista2;
    list<int> lista3;
    list<int>::iterator p1;
    list<int>::iterator p2;

    int l1; // Valores inseridos na lista 1
    int l2; // Valores inseridos na lista 2

    // Inserindo valores na lista 1
    cin >> l1;
    while (l1 != 0)
    {
        if (l1 != 0)
        {
            lista.push_back(l1);
        }
        cin >> l1;
    }

    // Inserindo valores na lista 2
    cin >> l2;
    while (l2 != 0)
    {
        if (l2 != 0)
        {
            lista2.push_back(l2);
        }
        cin >> l2;
    }

    // Unindo as duas listas
    while (!lista.empty() || !lista2.empty())
    {
        p1 = lista.begin();
        p2 = lista2.begin();
        if (*p1 == *p2)
        {
            lista3.push_back(*p1);
            lista.pop_front();
            lista2.pop_front();
        }
        else
        {
            if (*p1 < *p2)
            {

                lista3.push_back(*p1);
                lista.pop_front();
            }
            else
            {

                lista3.push_back(*p2);
                lista2.pop_front();
            }
        }
    }

    // Exibindo resultado da união
    while (!lista3.empty())
    {
        cout << lista3.front() << " ";
        lista3.pop_front();
    }
    return 0;
}
