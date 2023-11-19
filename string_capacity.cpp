#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World";
    cout << s.size() << endl; // string size
    cout << s.max_size() << endl; // amr computer kototuku sixe nity parbey
    cout << s.capacity() << endl; // input er upor depend kory capacity size increase korey
    //s.clear(); // sobkisu clear korey dibey
   // cout << s<< endl;

    if(s.empty() == true) cout << "Empty" << endl; // if s er moddhey value thakey then it will print not empty
    else cout << "Not Empty" << endl;
    s.resize(5); // size komano 
    s.resize(9,'W'); // size increase
    cout << s << endl;

    
    return 0;
}