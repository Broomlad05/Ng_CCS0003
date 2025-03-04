#include <iostream>
using namespace std;

int main() {
    // Employee Information
    string payrollPeriod, employeeID, employeeName;
    double basicSalary, allowances, latesMinutes;
    
    // Constants for deductions
    const double PHILHEALTH = 1200.00, PAGIBIG = 850.00, SSS = 1800.00;
    
    // User Input
    cout << "Enter Payroll Period: ";
    getline(cin, payrollPeriod);
    cout << "Enter Employee ID: ";
    cin >> employeeID;
    cin.ignore();  
    cout << "Enter Employee Name: ";
    getline(cin, employeeName);
    cout << "Enter Basic Monthly Salary: Php ";
    cin >> basicSalary;
    cout << "Enter Allowances & Bonuses: Php ";
    cin >> allowances;
    cout << "Enter Lates and Absences (in minutes): ";
    cin >> latesMinutes;

    // Compute Deductions
    double hourlyRate = (basicSalary / 30) / 8;  // Hourly rate
    double latesHours = latesMinutes / 60.0;     // Convert minutes to hours
    double latesDeductions = latesHours * hourlyRate; // Compute deduction

    // Compute Tax (25% if salary > 25000, otherwise 0%)
    double tax = (basicSalary > 25000.00) ? (basicSalary * 0.25) : 0.00;

    // Compute total earnings and deductions
    double totalEarnings = basicSalary + allowances;
    double totalDeductions = latesDeductions + PHILHEALTH + PAGIBIG + SSS + tax;
    double netPay = totalEarnings - totalDeductions;

    // Output Payroll Slip
    cout << "\n=== PAYROLL SLIP ===\n";
    cout << "Payroll Period: " << payrollPeriod << endl;
    cout << "Employee ID: " << employeeID << endl;
    cout << "Employee Name: " << employeeName << endl;
    cout << "\nINCOME" << endl;
    cout << "Monthly Salary: Php " << basicSalary << endl;
    cout << "Allowances: Php " << allowances << endl;
    cout << "\nDEDUCTIONS" << endl;
    cout << "Lates and Absences: Php " << latesDeductions << endl;
    cout << "Philhealth: Php " << PHILHEALTH << endl;
    cout << "Pag-ibig: Php " << PAGIBIG << endl;
    cout << "SSS: Php " << SSS << endl;
    cout << "Withholding Tax: Php " << tax << endl;
    cout << "\nTotal Earnings: Php " << totalEarnings << endl;
    cout << "Total Deductions: Php " << totalDeductions << endl;
    cout << "\nNet Pay: Php " << netPay << endl;
    
    return 0;
}
