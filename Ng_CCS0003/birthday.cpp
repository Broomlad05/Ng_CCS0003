#include <iostream>

using namespace std;

int main() {
    int birthYear, currentYear, age;

    cout << "Enter your birth year: ";
    cin >> birthYear;

    cout << "Enter the current year: ";
    cin >> currentYear;

    age = currentYear - birthYear;

    cout << "You were born in the year " << birthYear << "." << endl;
    cout << "You are " << age << " years old." << endl;

    return 0;
}
