#include <iostream>
#include <cmath>  
#include <iomanip> 

using namespace std;

int main() {
    double x1, y1, x2, y2, distance;

    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;
    cout << "Enter x2 and y2: ";
    cin >> x2 >> y2;

    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    cout << fixed << setprecision(2);
    cout << "The distance between the two points is: " << distance << endl;

    return 0;
}
