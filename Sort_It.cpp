#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    // Sort in ascending order
    sort(ar, ar + n);

    // Print ascending order
    for(int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;

    // Sort in descending order
    sort(ar, ar + n, greater<int>());

    // Print descending order
    for(int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}
