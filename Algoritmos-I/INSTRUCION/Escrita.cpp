#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream arq; //handle para arquivo
    int x = 2;

    //arq.open("teste.txt", ofstream::out); 
    arq.open("teste.txt", ofstream::app); //append
    arq << "Meu nome e Dimitri Amado" << endl;
    arq << x;
    arq.close();
    
    return 0;
}