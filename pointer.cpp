#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10; // stack er moddhey save hocchey
    
    int *p; // address variable which we know pointer

    p = &a; // a er address hold korchey, reference kora

   *p = 100; // dereference kora

    cout << a << endl;


    return 0;
}