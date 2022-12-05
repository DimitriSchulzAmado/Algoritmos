#include <iostream>
#include <cmath>
using namespace std;

int calc_a(int x)
{//calculando "a"
    int a;
    a = (2 * pow(x, 2)) + (3 * x) - 1;
    return a;
}
int calc_b(int x)
{//calculando "b"
    int b;
    b = pow(x, 3);
    return b;
}
int calc_c(int y)
{
    int c;
    c = pow(y, 3);
    return c;
}
int main()
{
    int a, b, c, x, y;
    cin >> x >> y;
    // a = 2x^2 + 3x - 1; 
    a = calc_a(x);
    cout << "a = " << a << endl;
    // b = x^3;
    b = calc_b(x);
    cout << "b = " << b << endl;
    // c = y^3;
    c = calc_c(y);
    cout << "c = " << c << endl;
    return 0;
}