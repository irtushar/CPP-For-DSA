#include <bits/stdc++.h>
using namespace std;

int main()
 {
    // Read input
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    // Evaluate the expression and print the result
    if (q == '=')
     {
        int result;
        if (s == '+')
        {
            result = a + b;
        } 
        else if (s == '-')
        {
            result = a - b;
        } 
        else if (s == '*')
        {
            result = a * b;
        }

        if (result == c) 
        {
            cout << "Yes" << endl;
        } 
        else
        {
            cout << result << endl;
        }
    }

    return 0;
}
