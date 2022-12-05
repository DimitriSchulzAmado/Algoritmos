#include <iostream>

using namespace std;

int main() {

	int id, id2;
	char name[50], name2[50];

	//---------------------------------------------------------------NOMES
	cin.getline(name, 50);
	cin.getline(name2, 50);

	//---------------------------------------------------------------IDADES
	cin >> id;
	cin >> id2;

	//---------------------------------------------------------------DECISAO
	if(id > id2)
		cout << name << endl;
	
	else if(id2 == id)
		cout << "Idades iguais" << endl;
	
	else
		cout << name2 << endl;
		
	return 0;
}
