#include <iostream>

using namespace std;

int main() {
    int month, day;
    string zodiac;

    cout << "Enter month: ";
    cin >> month;
    cout << "Enter day: ";
    cin >> day;

    switch (month) {
        case 1:
            if (day >= 20) zodiac = "Aquarius";
            else zodiac = "Capricorn";
            break;
        case 2:
            if (day >= 19) zodiac = "Pisces";
            else zodiac = "Aquarius";
            break;
        case 3:
            if (day >= 21) zodiac = "Aries";
            else zodiac = "Pisces";
            break;
        case 4:
            if (day >= 20) zodiac = "Taurus";
            else zodiac = "Aries";
            break;
        case 5:
            if (day >= 21) zodiac = "Gemini";
            else zodiac = "Taurus";
            break;
        case 6:
            if (day >= 21) zodiac = "Cancer";
            else zodiac = "Gemini";
            break;
        case 7:
            if (day >= 23) zodiac = "Leo";
            else zodiac = "Cancer";
            break;
        case 8:
            if (day >= 23) zodiac = "Virgo";
            else zodiac = "Leo";
            break;
        case 9:
            if (day >= 23) zodiac = "Libra";
            else zodiac = "Virgo";
            break;
        case 10:
            if (day >= 23) zodiac = "Scorpio";
            else zodiac = "Libra";
            break;
        case 11:
            if (day >= 22) zodiac = "Sagittarius";
            else zodiac = "Scorpio";
            break;
        case 12:
            if (day >= 22) zodiac = "Capricorn";
            else zodiac = "Sagittarius";
            break;
        default:
            zodiac = "Invalid date";
    }

    cout << "Zodiac sign for " << month << "/" << day << " is " << zodiac << endl;

    return 0;
}
