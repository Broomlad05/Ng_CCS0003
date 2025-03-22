#include <iostream>
using namespace std;

int main() {
    int start, last;

    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter last number: ";
    cin >> last;

    if (start > last) {
        cout << "Error: The starting number should be less than or equal to the last number." << endl;
    } else {
        cout << "The numbers are: ";
        while (start <= last) {
            cout << start;
            start++;
        }
        cout << endl;
    }

    return 0;
}