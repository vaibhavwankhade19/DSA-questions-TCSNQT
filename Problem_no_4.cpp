#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "";
    }

    for(int i=0;i<n;i++)
    {
        if (arr[i] % k == 0)

        {
            cout << arr[i] << "";
            found = true;
        }

    }
    if(!found)
    {
        return -1;
    }
    return 0;
        
    }
