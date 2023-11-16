#include <bits/stdc++.h>
using namespace std;

// pass by value
// void fun(int a, int b) // formal parameters
// {
//     int tmp = a;
//     a = b;
//     b = tmp;
// }

// int main()
// {
//     int a = 10, b = 40;
//     fun(a, b); // actual parameters
//     cout << a << " " << b << endl;
//     return 0;
// }


// Pass by address
// void fun(int *a, int *b) // formal parameters
// {
//     int tmp = *a;
//     *a = *b;
//     *b = tmp;
// }

// int main()
// {
//     int a = 10, b = 40;
//     fun(&a,&b); // actual parameters
//     cout << a << " " << b << endl;
//     return 0;
// }


// Pass by reference
void fun(int &a, int &b) // formal parameters
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int a = 10, b = 40;
    fun(a, b); // actual parameters
    cout << a << " " << b << endl;
    return 0;
}