#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    getline(cin, s);

    size_t found = s.find("EGYPT");
    while (found != string::npos) 
    {
        // Replace "EGYPT" with a space
        s.replace(found, 5, " ");
        found = s.find("EGYPT", found + 1);
    }
    cout << s << endl;

    return 0;
}
