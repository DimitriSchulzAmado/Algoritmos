#include <iostream>
#include <iomanip>
using namespace std;

struct dados
{
    int matricula; //matricula do aluno
    float P1; //prova 1
    float P2; //prova 2
};

int main()
{
    dados aluno;

    //entrando com a matricula e a nota das provas
    cin >> aluno.matricula;
    cin >> aluno.P1;
    cin >> aluno.P2;

    //saindo com a nota das provas
    cout << fixed << setprecision(2);
    cout << "Matricula do aluno: " << aluno.matricula << endl;
    cout << "Nota da primeira prova: " << aluno.P1 << endl;
    cout << "Nota da segunda prova: " << aluno.P2 << endl;
    return 0;
}
