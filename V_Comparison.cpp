#include <bits/stdc++.h>
using namespace std;

int main()
{
// Read input
int a, b;
char s;
cin >> a >> s >> b;

```
// Perform the comparison and print the result
if (s == '<')
 {
    if (a < b)
    {
        cout << "Right" << endl;
    }
    else
    {
        cout << "Wrong" << endl;
    }
}
else if (s == '>')
 {
    if (a > b)
    {
        cout << "Right" << endl;
    }
    else
    {
        cout << "Wrong" << endl;
    }
}
else if (s == '=')
{
    if (a == b)
    {
        cout << "Right" << endl;
    }
    else
    {
        cout << "Wrong" << endl;
    }
}

return 0;

}