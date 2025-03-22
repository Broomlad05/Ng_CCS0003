#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 0) {
        cout << "Error: Please enter a positive integer." << endl;
    } else {
        for (int i = 1; i <= num; i++) {
            sum += i; 
        }
        cout << "The sum from 1 to " << num << " is " << sum << endl;
    }

    return 0;
}
