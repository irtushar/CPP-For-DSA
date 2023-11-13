#include<bits/stdc++.h>
using namespace std;

int * fun()
{
    int *a = new int;
    *a = 100;
    return a;
}
int main()
{     
    int *p = fun();
    cout << p << "\n" << *p << endl;
//    int *a = new int ;
//    *a =10;
//    cout << a << endl; // aderss print hby
//    cout << *a << endl;// value print hby
   return 0;
}