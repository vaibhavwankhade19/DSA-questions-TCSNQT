#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int x) {
    int s = sqrt(x);
    return s * s == x;
}

bool isFibonacci(int n) {
    return isPerfectSquare(5*n*n + 4) || isPerfectSquare(5*n*n - 4);
}

int main() {
    int n;
    cin >> n;

    int sum = 0;

    if (isFibonacci(n)) {
        cout << "YES" << endl;
    } else {
        int a = 0, b = 1;
        while (b < n) {
            if (b % 2 == 0) sum += b;
            int temp = a + b;
            a = b;
            b = temp;
        }
        cout << sum << endl;
    }

    return 0;
}
