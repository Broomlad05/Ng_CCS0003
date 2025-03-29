#include <iostream>
#include <string>

using namespace std;

struct Account {
    string firstName, lastName, middleName, address, birthday;
    char gender;
    string accountType;
    double balance;
    int pin;
    bool isActive;
};

Account user;
bool accountExists = false;

void createAccount() {
    if (accountExists) {
        cout << "\nAn account already exists. You can only have one account.\n";
        return;
    }

    cout << "\n=== Open a New Account ===\n";

    cout << "Enter First Name: ";
    cin >> user.firstName;
    cout << "Enter Last Name: ";
    cin >> user.lastName;
    cout << "Enter Middle Name: ";
    cin >> user.middleName;
    cin.ignore();
    cout << "Enter Address: ";
    getline(cin, user.address);
    cout << "Enter Birthday (YYYY-MM-DD): ";
    cin >> user.birthday;
    
    int age;
    cout << "Enter Age: ";
    cin >> age;
    if (age < 18) {
        cout << "You must be at least 18 to open an account.\n";
        return;
    }

    do {
        cout << "Enter Gender (M/F): ";
        cin >> user.gender;
    } while (user.gender != 'M' && user.gender != 'F');

    do {
        cout << "Account Type (SA for Savings / CA for Current): ";
        cin >> user.accountType;
    } while (user.accountType != "SA" && user.accountType != "CA");

    double minDeposit = (user.accountType == "SA") ? 5000 : 10000;
    do {
        cout << "Enter Initial Deposit (Min: " << minDeposit << "): ";
        cin >> user.balance;
    } while (user.balance < minDeposit);

    do {
        cout << "Set a 6-digit PIN: ";
        cin >> user.pin;
    } while (user.pin < 100000 || user.pin > 999999);

    user.isActive = true;
    accountExists = true;

    cout << "\nAccount Created Successfully!\n";
}

bool verifyPIN() {
    int enteredPin;
    cout << "Enter your PIN: ";
    cin >> enteredPin;

    if (enteredPin != user.pin) {
        cout << "Incorrect PIN. Transaction canceled.\n";
        return false;
    }
    return true;
}

void balanceInquiry() {
    if (!accountExists) {
        cout << "\nNo account found. Please create an account first.\n";
        return;
    }
    if (!verifyPIN()) return;

    cout << "Current Balance: " << user.balance << "\n";
}

void deposit() {
    if (!accountExists) {
        cout << "\nNo account found. Please create an account first.\n";
        return;
    }
    if (!verifyPIN()) return;

    double amount;
    double minDeposit = (user.accountType == "SA") ? 300 : 500;
    do {
        cout << "Enter deposit amount (Min: " << minDeposit << "): ";
        cin >> amount;
    } while (amount < minDeposit);

    user.balance += amount;
    cout << "Deposit Successful! New Balance: " << user.balance << "\n";
}

void withdraw() {
    if (!accountExists) {
        cout << "\nNo account found. Please create an account first.\n";
        return;
    }
    if (!verifyPIN()) return;

    double amount;
    double minWithdraw = (user.accountType == "SA") ? 300 : 500;
    do {
        cout << "Enter withdrawal amount (Min: " << minWithdraw << ", Max: " << user.balance << "): ";
        cin >> amount;
        if (amount > user.balance) {
            cout << "Insufficient funds.\n";
        }
    } while (amount < minWithdraw || amount > user.balance);

    user.balance -= amount;
    cout << "Withdrawal Successful! New Balance: " << user.balance << "\n";
}

void viewAccountInfo() {
    if (!accountExists) {
        cout << "\nNo account found. Please create an account first.\n";
        return;
    }
    if (!verifyPIN()) return;

    cout << "\n=== Account Information ===\n";
    cout << "Name: " << user.firstName << " " << user.middleName << " " << user.lastName << "\n";
    cout << "Address: " << user.address << "\n";
    cout << "Birthday: " << user.birthday << "\n";
    cout << "Gender: " << (user.gender == 'M' ? "Male" : "Female") << "\n";
    cout << "Account Type: " << (user.accountType == "SA" ? "Savings" : "Current") << "\n";
    cout << "Balance: " << user.balance << "\n";
}

void closeAccount() {
    if (!accountExists) {
        cout << "\nNo account found. Please create an account first.\n";
        return;
    }
    if (!verifyPIN()) return;

    char confirm;
    cout << "Are you sure you want to close your account? (Y/N): ";
    cin >> confirm;
    if (confirm == 'Y' || confirm == 'y') {
        cout << "Account Closed. Your final balance of " << user.balance << " has been returned.\n";
        accountExists = false;
    }
}

int main() {
    int choice;
    
    do {
        cout << "\n=== Team D Banking System ===\n";
        cout << "1. Open a New Account\n";
        cout << "2. Balance Inquiry\n";
        cout << "3. Deposit\n";
        cout << "4. Withdraw\n";
        cout << "5. View Account Information\n";
        cout << "6. Close Account\n";
        cout << "7. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1: createAccount(); break;
            case 2: balanceInquiry(); break;
            case 3: deposit(); break;
            case 4: withdraw(); break;
            case 5: viewAccountInfo(); break;
            case 6: closeAccount(); break;
            case 7: cout << "Thank you for using Team D Banking System!\n"; break;
            default: cout << "Invalid option. Try again.\n";
        }

    } while (choice != 7);

    return 0;
}
