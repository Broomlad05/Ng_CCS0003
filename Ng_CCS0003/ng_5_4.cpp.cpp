#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;

int main() {
    char choice;
    cout << "Volume of Figures\n";
    cout << "\t[C] - Cube\n";
    cout << "\t[R] - Rectangular Prism\n";
    cout << "\t[S] - Sphere\n";
    cout << "Choose figure: ";
    cin >> choice;

    choice = toupper(choice);

    switch (choice) {
        case 'C': {
            double side;
            cout << "\nYou have chosen Cube.\n";
            cout << "Enter side: ";
            cin >> side;
            cout << "The volume of the cube is: " << pow(side, 3) << endl;
            break;
        }
        case 'R': {
            double length, width, height;
            cout << "\nYou have chosen Rectangular Prism.\n";
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            cout << "Enter height: ";
            cin >> height;
            cout << "The volume of the rectangular prism is: " << (length * width * height) << endl;
            break;
        }
        case 'S': {
            double radius;
            cout << "\nYou have chosen Sphere.\n";
            cout << "Enter radius: ";
            cin >> radius;
            cout << "The volume of the sphere is: " << ((4.0 / 3) * M_PI * pow(radius, 3)) << endl;
            break;
        }
        default:
            cout << "\nInvalid choice. Please choose C, R, or S.\n";
    }

    return 0;
}
