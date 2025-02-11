#include <iostream>
#include <iomanip> 

using namespace std;

int main() {

    double phpAmount, usd, euro, yuan, koruna, krone, sheqel, dinar;

    cout << "Enter Philippine peso: ";
    cin >> phpAmount;

    
    usd = phpAmount / 43.33089;
    euro = usd * 0.734719;
    yuan = usd * 6.346934;
    koruna = usd * 18.77263;
    krone = usd * 5.449007;
    sheqel = usd * 3.726334;
    dinar = usd * 0.274588;

    cout << fixed << setprecision(6); 
    cout << "\nThe amount's equivalent to:\n";
    cout << "US Dollar is \t: \t" << usd << endl;
    cout << "Euro\t\t: \t" << euro << endl;
    cout << "Yuan\t\t: \t" << yuan << endl;
    cout << "Koruna\t\t: \t" << koruna << endl;
    cout << "Krone\t\t: \t" << krone << endl;
    cout << "Sheqel\t\t: \t" << sheqel << endl;
    cout << "Dinar\t\t: \t" << dinar << endl;

    return 0;
}
