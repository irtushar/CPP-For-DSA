#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // User inputs the number of elements in the array.

    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin >> ar[i]; // User inputs the elements of the array.
    }

    // Bubble Sort Algorithm
    for(int i=0; i< n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if(ar[i]>ar[j])
            {
                swap(ar[i], ar[j]); // Swap elements if they are in the wrong order.
            }
        }
    }

    // Output the sorted array
    for(int i=0; i<n; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}