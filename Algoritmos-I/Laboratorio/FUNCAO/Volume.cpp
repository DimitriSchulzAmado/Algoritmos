#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float calc_volume(float raio){
    float PI = 3.14;
    float volume = 0;

    volume = 4.0 / 3.0 * PI * pow(raio, 3);
    return volume;
}

int main(){

    float R;
    float volume; 

    cin >> R;

    volume = calc_volume(R);
    cout << fixed << setprecision(2);
    cout << volume << endl;
    return 0;
}