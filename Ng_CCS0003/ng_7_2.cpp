#include <iostream>
#include <cmath>
using namespace std;

double volumeCube(double side) { return pow(side, 3); }
double volumeSphere(double radius) { return (4.0 / 3) * M_PI * pow(radius, 3); }
double volumeRectPrism(double l, double w, double h) { return l * w * h; }

int main() {
    char choice;
    do {
        cout << "*************************************************************************************************************************\n";
        cout << "Volume of Shapes\n";
        cout << "*************************************************************************************************************************\n";
        cout << "[C] Cube\n[S] Sphere\n[R] Rectangular Parallelepiped\n[X] EXIT\n";
        cout << "*************************************************************************************************************************\n";
        cout << "Choose your option: ";
        cin >> choice;

        switch (toupper(choice)) {
            case 'C': {
                double side;
                cout << "You choose to solve the Volume of the Cube!\nEnter side: ";
                cin >> side;
                cout << "The volume of the cube is " << volumeCube(side) << ".\n";
                break;
            }
            case 'S': {
                double radius;
                cout << "You choose to solve the Volume of the Sphere!\nEnter radius: ";
                cin >> radius;
                cout << "The volume of the sphere is " << volumeSphere(radius) << ".\n";
                break;
            }
            case 'R': {
                double length, width, height;
                cout << "You choose to solve the Volume of the Rectangular Parallelepiped!\n";
                cout << "Enter length, width, and height: ";
                cin >> length >> width >> height;
                cout << "The volume of the rectangular parallelepiped is " << volumeRectPrism(length, width, height) << ".\n";
                break;
            }
            case 'X':
                cout << "Exiting program...\n";
                return 0;
            default:
                cout << "Invalid option! Please choose C, S, R, or X.\n";
        }

        cout << "Press any key to continue...\n";
        cin.ignore();
        cin.get();
    } while (true);

    return 0;
}
