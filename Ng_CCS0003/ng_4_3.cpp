#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    double a, b, C, c;
   
    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    cout << "Enter angle C (in degrees): ";
    cin >> C;

    double C_rad = C * (M_PI / 180.0);

    c = sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(C_rad));

    cout << "\nThe length of side c is: " << c << endl;

    return 0;
}
