#include <bits/stdc++.h>
using namespace std;

int main()
 {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; ++i)
    {
        cin >> a[i];
    }

    // Check if the array is a palindrome
    int flag = 1;
    for (int i=0, j=n-1; i<j; ++i, --j)
    {
        if (a[i] != a[j])
        {
            flag = 0;
            break;
        }
    }

    // Output the result
    if (flag)
    {
        cout << "YES" << endl;
    } 
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
