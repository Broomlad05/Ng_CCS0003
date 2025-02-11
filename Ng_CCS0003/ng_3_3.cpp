#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    int sum, difference, product, remainder, quotient;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    remainder = num1 % num2;
    quotient = num1 / num2;

    cout << "\nResults:" << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Remainder: " << remainder << endl;
    cout << "Quotient: " << quotient << endl;

    return 0;
}

