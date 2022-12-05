#include <iostream>
using namespace std;

int main()
{
    char matriz[3][5];
    int N; // line numbers
    int M; // colum numbers

    cin >> N >> M;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
            cin >> matriz[i][j];
    }

    for(int j = 0; j < M; j++)
    {
        for(int i = 0; i < N; i++)
            cout << matriz[i][j];
    }
    return 0;
}