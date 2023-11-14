#include <bits/stdc++.h>
using namespace std;
int main()
 {

  long long a, b, sum, mul, sub;
  cin >> a >> b;

  sum = a + b;
  mul = a * b;
  sub = a - b;

  cout << a << " + " <<  b << " = " << sum <<"\n";     
  cout << a << " * " <<  b << " = " << mul <<"\n";     
  cout << a << " - " <<  b << " = " << sub <<"\n";     

  return 0;
}