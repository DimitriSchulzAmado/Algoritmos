#include <iostream>
using namespace std;

int main(){
    
    int nota;
    
    do{
        cout << "insira sua nota: " << endl;
        cin >> nota;
        
        if(nota >= 60)
            cout << "Passou" << endl;
        else if (nota >= 0)
            cout << "Reprovado" << endl;
    }
    while(nota >= 0);
    
    return 0;
}