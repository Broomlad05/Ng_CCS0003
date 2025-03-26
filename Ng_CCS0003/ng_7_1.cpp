#include <iostream>
using namespace std;

double toFahrenheit(double c) { return (c * 9/5) + 32; }
double toCelsius(double f) { return (f - 32) * 5/9; }
double toKelvin(double c) { return c + 273.15; }

int main() {
    char choice;
    do {
        int option;
        double temp;
        
        cout << "**************** TEMPERATURE CONVERTER ****************\n";
        cout << "[1] Celsius to Fahrenheit\n[2] Fahrenheit to Celsius\n[3] Celsius to Kelvin\n";
        cout << "Choose your option: ";
        cin >> option;

        cout << "Enter temperature: ";
        cin >> temp;

        if (option == 1) cout << temp << "°C is " << toFahrenheit(temp) << "°F\n";
        else if (option == 2) cout << temp << "°F is " << toCelsius(temp) << "°C\n";
        else if (option == 3) cout << temp << "°C is " << toKelvin(temp) << "K\n";
        else { cout << "Invalid option.\n"; continue; }

        cout << "Do you want to continue [Y/N]? ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}

