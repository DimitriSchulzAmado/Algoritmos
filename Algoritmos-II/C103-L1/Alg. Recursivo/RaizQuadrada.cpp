#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

float raiz(float x, float x0, float e)
{
	float aux;

	aux = fabs(pow(x0, 2) - x);

	if(aux <= e)
		return x0;
	else
		return raiz(x, ((pow(x0, 2) + x) / (2 * x0)), e);
}

int main()
{
	float x, x0, e;

	cin >> x >> x0 >> e;

	cout << fixed << setprecision(2);
	cout << raiz(x, x0, e) << endl;

    return 0;
}