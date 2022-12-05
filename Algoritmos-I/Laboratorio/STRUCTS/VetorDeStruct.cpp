#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

struct dados
{
    char nome[50];            //nome do aluno
    char escolhido[50];       // aluno J
    char nome_menor_nota[50]; //nome da pessoa com a menor nota
    int matricula;            //matricula do aluno
    int J;                    //posição do aluno J
    double nota;              //nota do aluno
    double media;             //media da turma
    double soma;              //soma para a media da turma
    double menor_nota;        //menor nota dentre os alunos
};
int main()
{
    struct dados aluno[100];

    int N;    //número de pessoas
    int i = 0;    //contador 
    int x;    //posição do aluno " J "

    aluno[i].media = 0;
    aluno[i].menor_nota = 999999;
    //entrada de dados
    cin >> N;
    cin >> aluno[i].J;
    for (i = 0; i < N; i++)
    {
        cin.ignore();
        cin.getline(aluno[i].nome, 50);
        if (i == aluno[i].J)
        {
            strcpy(aluno[i].escolhido, aluno[i].nome);
            x = i;
        }
        cin >> aluno[i].matricula;
        cin >> aluno[i].nota;
        if (aluno[i].nota < aluno[i].menor_nota)
        {
            aluno[i].menor_nota = aluno[i].nota;
            strcpy(aluno[i].nome_menor_nota, aluno[i].nome);
        }
        aluno[i].soma += aluno[i].nota;
    }
    cout << fixed << setprecision(2);
    aluno[i].media = aluno[i].soma / N;
    cout << "Media: " << aluno[i].media << endl;
    cout << aluno[i].nome_menor_nota << endl;
    cout << aluno[i].escolhido << " " << aluno[x].matricula << " " << aluno[x].nota << endl;
    return 0;
}