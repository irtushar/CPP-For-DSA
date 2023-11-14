#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cin >> x;

    if(x >='0' && x <='9')
    {
        cout << ("IS DIGIT") << "\n";
    }

    else if (x >='a' && x <='z' || x >='A' && x <='Z')
    {
        cout << ("ALPHA") << "\n";
        if( x >='A' && x <='Z')
        {
            cout << ("IS CAPITAL") << "\n";
        }
        else if(x >='a' && x <='z')
        {
            cout << ("IS SMALL") << "\n";
        }
    }
    return 0;
}