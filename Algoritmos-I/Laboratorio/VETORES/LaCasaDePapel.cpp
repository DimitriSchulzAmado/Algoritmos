#include <iostream>
using namespace std;

int main()
{
    int N; //numero de pessoas que votaram
    int opinion[100]; //se os que votaram gostaram ou não
    int i; //contador auxiliar do FOR
    int like = 0; //gostaram
    int dislike = 0; //nao gostaram

    //entrando com a quantidade de pessoas que votaram
    do
    {
        cin >> N;
    } while (N < 0 && N > 1000);
    //votação
    for (i = 0; i < N; i++)
    {
        cin >> opinion[i];
        //fazendo a somatória e vendo qual o resultado
        switch(opinion[i])
        {
            case (1):
                like = like++;
                break;
            case (-1):
                dislike = dislike++;
                break;
        }
    }
    //mostrando o resultado da votação
    if(like > dislike)
        cout << "A maioria gostou" << endl;
    else if(like < dislike)
        cout << "A maioria nao gostou" << endl;
    else if(like == dislike)
        cout << "Deu empate" << endl;
    return 0;
}