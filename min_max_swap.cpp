#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;

// void fun_swap(int *a, int *b)
// {
//    int tmp = *a; 
//     *a = *b;       
//     *b = tmp; 
// }

int main()
{    
    int a,b;
    cin >> a >> b;

    swap(a,b);
    cout << a << " " << b << endl;

//    int a,b,c,d;
//    cin >> a >> b >> c >> d;

//    int mn = min({a,b,c,d});
//    int mx = max({a,b,c,d});
//    cout << mn << " " << mx << endl;

//    int c = min(a,b); // minimum value
//    int d = max(a,b); // maximum value
//    cout << c << " " << d << endl;

    return 0;
}