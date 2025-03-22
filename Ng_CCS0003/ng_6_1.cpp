#include <iostream>
using namespace std;

int main() {
    int num1, num2, product = 0;
    
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    
    int count = abs(num2); 
    while (count > 0) {
        product += num1;
        count--;
    }
    
    if (num2 < 0) { 
        product = -product;
    }
    
    cout << "Product: " << product << endl;
    
    return 0;
}