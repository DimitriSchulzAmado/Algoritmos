#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char VertOrInvert[50]; // Animais vertebrados ou invertebrados
    char GeneroAnimal[50]; // Ave, mamífero, inseto ou anelídeo
    char Gosta_comer[50];  // O que ele gosta de comer
    
    //lendo as tres palavras
    cin.getline(VertOrInvert, 50); 
    cin.getline(GeneroAnimal, 50); 
    cin.getline(Gosta_comer, 50);

    //fazendo a sentença de acordo com o fluxograma
    
    //Caso seja um animal vertebrado
    if(strcmp(VertOrInvert, "vertebrado") == 0)
    {
        //Se for uma ave
        if(strcmp(GeneroAnimal, "ave") == 0)
        {
            //Se gostar de comer carne
            if(strcmp(Gosta_comer, "carnivoro") == 0)
                cout << "aguia" << endl;

            //Se gostar de comer ovo
            else if(strcmp(Gosta_comer, "onivoro") == 0)
                cout << "pomba" << endl;
        }

        //Se for um mamífero
        if(strcmp(GeneroAnimal, "mamifero") == 0)
        {
            //Se gostar de comer ovo
            if(strcmp(Gosta_comer, "onivoro") == 0)
                cout << "homem" << endl;

            //Se gostar de comer plantas
            else if(strcmp(Gosta_comer, "herbivoro") == 0)
                cout << "vaca" << endl;
        }
    }

    //Caso seja um animal invertebrado
    if(strcmp(VertOrInvert, "invertebrado") == 0)
    {
        //Se for um inseto
        if(strcmp(GeneroAnimal, "inseto") == 0)
        {
            //Se for hematofago
            if(strcmp(Gosta_comer, "hematofago") == 0)
                cout << "pulga" << endl;

            //Se gostar de comer planta
            else if(strcmp(Gosta_comer, "herbivoro") == 0)
                cout << "lagarta" << endl;
        }

        //Se for um anelídeo
        if(strcmp(GeneroAnimal, "anelideo") == 0)
        {
            //Se for hematofago
            if(strcmp(Gosta_comer, "hematofago") == 0)
                cout << "sanguessuga" << endl;

            //Se gostar de comer ovo
            else if(strcmp(Gosta_comer, "onivoro") == 0)
                cout << "minhoca" << endl;
        }
    }
    return 0;
}