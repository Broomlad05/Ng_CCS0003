#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 0) {
        cout << "Error: Please enter a positive integer." << endl;
    } else {
        for (int i = 1; i <= num; i++) { 
            for (int j = 1; j <= i; j++) { 
                cout << "*";
            }
            cout << endl; 
        }
    }

    return 0;
}