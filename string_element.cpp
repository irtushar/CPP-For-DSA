#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World";
    cout << s[0] << endl; // when we use array + first element access
    cout << s.at(0) << endl; // when we use function
    cout << s.front() << endl;

    cout << s[s.size()-1] << endl;// last element access
    cout << s.back() << endl;
    return 0;

    // cout << s[0] << endl; 
    // cout << s.back() << endl;
    //  we use both two
}