#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool ispalindrom = true;

    int left = 0;
    int right = s.size() - 1;

    while (left < right)
    {
        if (s[left] != s[right])
        {
            ispalindrom = false;
            break;  // exit loop immediately if mismatch
        }
        left++;   // move inward
        right--;
    }

    if (ispalindrom)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
