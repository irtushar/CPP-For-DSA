#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int max = INT_MIN; // Initialize maxNumber to a very small value
    for (int i = 0; i < n; i++)
     {
        int X;
        cin >> X;

        // Update maxNumber if Xi is greater than the current maxNumber
        if (X > max) 
        {
            max = X;
        }
    }
    // Print the maximum number
    cout << max << endl;

    return 0;
}
