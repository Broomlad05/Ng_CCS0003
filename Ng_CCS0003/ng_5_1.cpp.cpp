#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string surname = "Ng"; // Change this to your surname
    double grade1, grade2, grade3, average;

    cout << "Enter first exam grade: ";
    cin >> grade1;
    cout << "Enter second exam grade: ";
    cin >> grade2;
    cout << "Enter third exam grade: ";
    cin >> grade3;

    average = (grade1 + grade2 + grade3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "Average grade: " << average << " ";

    if (average >= 70) {
        cout << ":)" << endl;
    } else {
        cout << ":(" << endl;
    }

    return 0;
}
