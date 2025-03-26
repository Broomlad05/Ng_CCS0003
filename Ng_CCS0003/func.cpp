#include <iostream>
#include <iomanip>

using namespace std;

float Area_Rectangle(float l, float w);
float Area_Circle(float r);

int main() {
    char opt;
    float A;

    do {
        cout << "\nS H A P E S\n";
        cout << "[R] - Rectangle\n";
        cout << "[C] - Circle\n";
        cout << "[X] - Exit\n";
        cout << "Enter your choice: ";
        cin >> opt;

        if (opt == 'R' || opt == 'r') {
            float length, width;
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            A = Area_Rectangle(length, width);
            cout << "The area of the rectangle is " << fixed << setprecision(2) << A << endl;
        } 
        else if (opt == 'C' || opt == 'c') {
            float radius;
            cout << "Enter radius: ";
            cin >> radius;
            A = Area_Circle(radius);
            cout << "The area of the circle is " << fixed << setprecision(2) << A << endl;
        } 
        else if (opt != 'X' && opt != 'x') {
            cout << "Invalid choice! Try again.\n";
        }

    } while (opt != 'X' && opt != 'x');

    cout << "Thank you for using the program.\n";
    return 0;
}

float Area_Rectangle(float l, float w) {
    return l * w;
}

float Area_Circle(float r) {
    return 3.14 * r * r;
}
