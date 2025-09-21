#include <iostream>
using namespace std;

int SumDigits(int n)
{
    if (n == 0) return 0;
    return (n % 10) + SumDigits(n / 10);
}

int main()
{
    int n;
    cin >> n;

    if (n < 0)
    {
        cout << "Please enter a non-negative number";
    }
    else
    {
        cout << "Sum of digits = " << SumDigits(n) << endl;
    }
    return 0;
}
