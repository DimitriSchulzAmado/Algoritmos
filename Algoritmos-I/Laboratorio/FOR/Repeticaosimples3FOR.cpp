#include <iostream>
using namespace std;

int main(){

    int i; // variavel auxiliar do FOR
    
    //looping
    for(i = 1; i <= 100; i++){
        //caso seja multiplo de 3
        if((i%3 == 0) && (i%2 == 0)){
            cout << i << endl;
        }
    }

    return 0;
}