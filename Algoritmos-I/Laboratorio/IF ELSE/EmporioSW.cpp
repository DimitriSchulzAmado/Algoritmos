#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main (){
	int cp, idade; // código do produto && idade
	double p, pc, troco; // preço do produto && pagamento do cliente && troco
	char nome[100]; // nome da pessoa
	char cidade [100]; // cidade onde a pessoa mora

    //entrada de dados
	cin >> cp;
	cin >> p;
	cin.ignore();
	cin.getline(nome,100);
	cin.ignore();
	cin.getline(cidade,100);
	cin >> idade;
	cin >> pc;

    // lógica
	switch(cp){
		case(1):
			troco = pc - p;
			cout << "Queijo" << endl;
			cout << fixed << setprecision(2);
			cout << "Valor total = " << p << endl;
			cout << "Troco = " << troco << endl;
			break;
		
        case(2):
			troco = pc - p;
			cout << "Geleia" << endl;
			cout << fixed << setprecision(2);
			cout << "Valor total = " << p << endl;
			cout << "Troco = " << troco << endl;
			break;
		
        case(3):
			troco = pc - p;
			cout << "Doce" << endl;
			cout << fixed << setprecision(2);
			cout << "Valor total = " << p << endl;
			cout << "Troco = " << troco << endl;
			break;
		
        case(4):
			troco = pc - p;
			cout << "Refrigerante" << endl;
			cout << fixed << setprecision(2);
			cout << "Valor total = " << p << endl;
			cout << "Troco = " << troco << endl;
			break;
		
        case(5):
			troco = pc - p;
			cout << "Sorvete" << endl;
			cout << fixed << setprecision(2);
			cout << "Valor total = " << p << endl;
			cout << "Troco = " << troco << endl;
			break;
		
        case(6):
			troco = pc - p;
			cout << "Presunto cru" << endl;
			cout << fixed << setprecision(2);
			cout << "Valor total = " << p << endl;
			cout << "Troco = " << troco << endl;
			break;
		
        case(7):
			troco = pc - p;
			cout << "Vinho" << endl;
			cout << fixed << setprecision(2);
			cout << "Valor total = " << p << endl;
			cout << "Troco = " << troco << endl;
			break;
	}
	return 0;
}