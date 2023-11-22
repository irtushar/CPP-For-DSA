#include<bits/stdc++.h>
using namespace std;

int main() 
{
    // Number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--) 
    {
        // Input for each test case
        string ticket;
        cin >> ticket;

        // Check if the ticket is lucky
        int sum_first_three = (ticket[0] - '0') + (ticket[1] - '0') + (ticket[2] - '0');
        int sum_last_three = (ticket[3] - '0') + (ticket[4] - '0') + (ticket[5] - '0');

        // Print the result
        if (sum_first_three == sum_last_three) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
