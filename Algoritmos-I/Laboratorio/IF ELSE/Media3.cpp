#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    float N1, N2, N3, N4; //notas do aluno
    float media;          //media do aluno
    float exame;		  //prova de recuperação
    float media_final;	  //media da recuperação
    
    //ler 4 notas de um aluno(float)
    cin >> N1 >> N2 >> N3 >> N4;
    media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + N4) / 10;
    
    cout << fixed << setprecision(1);
    if(media >= 7.0)
    {
        cout << "Media: " << media << endl;
        cout << "Aluno aprovado" << endl;
    }
    else if(media < 5.0)
    {
        cout << "Media: " << media << endl;
        cout << "Aluno reprovado" << endl;
    }
    else if(media >= 5.0 && media <= 6.9)
    {
        cout << "Media: " << media << endl;
        cout << "Aluno em exame." << endl;
        cin >> exame;
        media_final = (media + exame) / 2;
        cout << "Nota do exame: " << exame << endl;
        if(media_final >= 5.0)
        	cout << "Aluno aprovado. " << endl;
        else
        	cout << "Aluno reprovado. " << endl;
        cout << "Media final: " << media_final << endl;
    }  
    return 0;
}