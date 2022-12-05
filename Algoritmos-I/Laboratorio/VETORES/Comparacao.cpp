#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
 	
 	char jogadorA[50]; // jogador A
 	char jogadorB[50]; // jogador B
 	int result = 0; // resultado da jogada
 	int T; // Quantidade de jogadas
 	int i; //contador
 	
 	do
	{
		cin >> T;		 
	} while(T > 10);
	for(i = 0; i < T; i++)
	{
		cin.ignore();
		cin.getline(jogadorA, 50);
		cin.getline(jogadorB, 50);
		result = strcmp(jogadorA, jogadorB);
		if(result == 0)
		 	cout << "Empate" << endl;
		else if(result == 1)
			cout << "Jogador B" << endl;
		else if(result == -1)
			cout << "Jogador A"	<< endl;	
	}
    return 0;
}