#include <iostream>
using namespace std;

int main(){

    int i; // variavel auxiliar do FOR

    for(i = 1; i <= 50; i++){
        if(i%2 == 0){
            cout << i << endl;
        }
    }

    return 0;
}