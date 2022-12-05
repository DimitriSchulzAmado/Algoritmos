#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double a, b, c;
	char option;
	
    cin >> a >> b;
	cin >> option;

	switch(option){
		case('+'):
			c = a + b;
			cout << c;
			break;

		case('-'):
			c = a - b;
			cout << c;
			break;
		
        case('*'):
			c = a * b;
			cout << c;
			break;
		
        case('/'):
			if(b != 0){
			    c = a / b;
			    cout << c;
			break;
			}
			else{
				cout << "Impossivel";
			}
	}
	
	return 0;
}