#include <iostream>
using namespace std;

int main()
{
    int i;         //contador
    int N;         //numero de videos
    int view[100]; //numero de views
    int Vmenor;    //quantidade de videos com menos de 10M views
    int Vmaior;    //quantidade de videos com mais de 10M views

    //entrada do numero de videos a serem analisados
    cin >> N;
    //entrada do numero de views
    for (i = 0; i < N; i++)
        cin >> view[i];
    //quantos tem mais de 10M views
    for (i = 1; i < N; i++)
    {
        if (view[i] > 10000000)
            Vmaior = i;
        //quantos tem menos de 10M views
        if (view[i] < 10000000)
            Vmenor = i;
    }
    //apresentando a quantidade de videos
    cout << Vmaior << " video(s) com mais de 10M views" << endl;
    cout << Vmenor << " video(s) com menos de 10M views" << endl;

    return 0;
}