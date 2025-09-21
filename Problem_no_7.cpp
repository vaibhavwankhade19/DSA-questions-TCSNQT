#include <bits/stdc++.h>
using namespace std;

// Helper function to count digits
int countDigits(int n) {
    if(n == 0) return 0;
    return 1 + countDigits(n/10);
}

// Recursive function to reverse number
int reverseNumber(int n) {
    if(n == 0) return 0;

    int digits = countDigits(n) - 1;
    int lastDigit = n % 10;

    return lastDigit * pow(10, digits) + reverseNumber(n / 10);
}

int main() {
    int n;
    cin >> n;

    if(n < 0) {
        cout << "Please enter a non-negative number";
    } else {
        cout << reverseNumber(n);
    }
    return 0;
}
