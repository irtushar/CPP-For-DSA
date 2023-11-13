#include<iostream>
using namespace std;

int main()
{   
   int x;
   cin >> x;

   switch(x%2)// if we mod x by 2  then the answer should go case 1
   {

    case 0:
    cout << "Even" <<endl;

    case 1:
    cout << "Odd" <<endl;
    
   }
   
    return 0;
}