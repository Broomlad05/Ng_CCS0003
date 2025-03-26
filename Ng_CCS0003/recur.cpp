#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "The next number in the Fibonacci sequence\n";
    cout << "after " << n << " numbers is " << fib(n) << endl;
    
    return 0;
}
