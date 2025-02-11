#include <iostream>
using namespace std;

int main() {
    double celcius, farenheit;

    cout << "Enter the temperature in celcius: ";
    cin >> celcius;

    farenheit = (celcius * 9/5) + 32;

    cout << "The temperature in farenheit is: " << farenheit << "°F" << endl;


    return 0;
}