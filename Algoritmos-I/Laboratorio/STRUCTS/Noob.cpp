#include <iostream>
#include <iomanip>
using namespace std;

struct dados
{
    int matricula; //matricula do aluno
    float p1; //prova 1
    float p2; //prova 2
    float media; //media das provas
};

int main()
{
    dados aluno;
    
    //entrando com a matricula e as notas
    cin >> aluno.matricula;
    cin >> aluno.p1;
    cin >> aluno.p2;

    //fazendo a media e exibindo resultados
    aluno.media = (2*aluno.p1 + 3*aluno.p2) / 5;
    cout << fixed << setprecision(2);
    cout << "Matricula do aluno: " << aluno.matricula << endl;
    cout << "Nota da primeira prova: " << aluno.p1 << endl;
    cout << "Nota da segunda prova: " << aluno.p2 << endl;
    cout << "Media: " << aluno.media << endl;

    return 0;
}