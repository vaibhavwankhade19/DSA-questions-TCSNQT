#include <iostream>
#include <string>
using namespace std;

string oneToNineteen[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
                          "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen",
                          "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
string thousands[] = {"", "Thousand", "Million", "Billion"};

string convertBelowThousand(int num) {
    string res;
    if (num >= 100) {
        res += oneToNineteen[num / 100] + " Hundred ";
        num %= 100;
    }
    if (num >= 20) {
        res += tens[num / 10] + " ";
        num %= 10;
    }
    if (num > 0) {
        res += oneToNineteen[num] + " ";
    }
    return res;
}

string numberToWords(int num) {
    if (num == 0) return "Zero";
    string result;
    int i = 0;
    while (num > 0) {
        if (num % 1000 != 0) {
            result = convertBelowThousand(num % 1000) + thousands[i] + " " + result;
        }
        num /= 1000;
        i++;
    }
    return result;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "In words: " << numberToWords(num) << endl;
    return 0;
}
