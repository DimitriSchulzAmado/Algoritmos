/* 
    Professor Assustador 1
*/

#include <iostream>
#include <iomanip>
using namespace std;

float media(int notas[], int nAlunos)
{
    int i = 0;      //contador
    double soma = 0;   //soma para media
    double medias;     //media das notas

    for(i = 0; i < nAlunos; i++)
    {
        soma += notas[i];
        medias = (soma * 1.0) / nAlunos;
    }
    return medias;
}

int main()
{
    int N; //qtd de alunos
    int nota[50];
    double median; //media da turma
    
    cin >> N;
    for(int i = 0; i < N; i++)
        cin >> nota[i];
    
    median = media(nota, N);
    cout << fixed << setprecision(2);
    cout << "Media da turma = " << median << endl;
    return 0;
}

//----------------------------------------------------------------
/* 
    Professor Assustador 2
*/
#include <iostream>
#include <iomanip>
using namespace std;

int nAbaixo(int notas[], int nAlunos, float media)
{
    int i;
    int abaixo = 0;

    for(i = 0; i < nAlunos; i++)
        if(notas[i] < media)
            abaixo++;
    return abaixo;
}
int nAcima(int notas[], int nAlunos, float media)
{
    int i;
    int acima = 0;

    for(i = 0; i < nAlunos; i++)
        if(notas[i] >= media)
            acima++;
    return acima;
}

int main()
{
    int N;          //número de alunos
    int i;          //contador
    int nota[50];   //nota do aluno
    int abaixo;     //abaixo da media
    int acima;      //acima da media
    float soma = 0; //soma para media
    float media;    //media das notas

    //entrando com o número de alunos
    cin >> N;
    //entrando com as notas dos N alunos
    for (i = 0; i < N; i++)
        cin >> nota[i];
    //calculando a media
    for (i = 0; i < N; i++)
        soma += nota[i];
    media = soma / N;

    abaixo = nAbaixo(nota, N, media);
    acima = nAcima(nota, N, media);
    //exibindo resultados
    cout << fixed << setprecision(2);
    cout << "Media da turma = " << media << endl;
    cout << "Alunos com nota abaixo da media: " << abaixo << endl;
    cout << "Alunos com nota acima da media: " << acima << endl;
    return 0;
}