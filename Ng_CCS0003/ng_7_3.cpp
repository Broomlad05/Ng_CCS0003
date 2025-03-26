#include <iostream>
using namespace std;

int hcf(int a, int b) {
    return (b == 0) ? a : hcf(b, a % b);
}

int main() {
    int num1, num2;
    
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    cout << "HCF of " << num1 << " and " << num2 << " is " << hcf(num1, num2) << ".\n";

    return 0;
}
