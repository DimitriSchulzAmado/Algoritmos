#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c;
	double delta, X1, X2;

	cin >> a >> b >> c;

	if(a != 0)
	{
		delta = (b * b) - 4 * a * c;

		if(delta < 0)
			cout << "Impossivel";
		
		else if(delta > 0)
		{
			X1 = (-b + sqrt(delta)) / (2 * a);
			X2 = (-b - sqrt(delta)) / (2 * a);
			cout << fixed << setprecision(5);
			cout << "X1 = " << X1 << endl << "X2 = " << X2;
		}
	}
	else	
		cout << "Impossivel";

	return 0;
}
