#include <iostream>
#include <limits> // for numeric_limits
using namespace std;

int main() {
    double num1, num2;

    cout << "Enter first number: ";
    if (!(cin >> num1)) {
        cout << "Invalid input! Please enter a numeric value.\n";
        return 0;
    }

    cout << "Enter second number: ";
    if (!(cin >> num2)) {
        cout << "Invalid input! Please enter a numeric value.\n";
        return 0;
    }

    double sum = num1 + num2;
    cout << "Sum = " << sum << endl;

    return 0;
}
