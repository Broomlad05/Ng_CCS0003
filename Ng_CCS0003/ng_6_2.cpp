#include <iostream>
using namespace std;

int main() {
    int num, factorial = 1, i;

    cout << "Enter an integer number: ";
    cin >> num;

    i = num; 
    do {
        factorial *= i;
        i--;
    } while (i > 0);

    cout << "The factorial of " << num << " is: " << factorial << endl;

    return 0;
}
