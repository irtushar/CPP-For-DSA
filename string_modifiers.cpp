#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string a = "Hello";
    // string b = "World";
    // a = a+b; // string add
    // a+=b;     // string add
    // a.append(b);// string add
    // cout << a << endl;

   // a = "HelloA";
   // a = a+"A";
   // a = a+b: // if string b = "A"; 
   // a.push_back('A');
   // a.pop_back(); // back theky word delete kora
    
    //a = "Gello";
    //a.assign("Gello");
   // cout << a << endl;

    string a = "Hello World";
    //a.erase(4,1); // we use 4 for index 4 , for delete. and use 1 for delete 1 element
    
    // a.replace(4,1, "A");
    // use this for replace old element to new element
   
    a.insert(5," Ifath");
   
    cout << a << endl;

    return 0;
}