#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa) //constructor
    {
      this->roll  = roll;
      this->cls = cls;
      this->gpa = gpa;   
    }
};

int main()
{
    Student ifath(1, 9 , 4.75);
    cout << ifath.roll <<" " << ifath.cls << " " << ifath.gpa << endl;
    
    Student rakib(20, 10 , 4.5);
    cout << rakib.roll <<" " << rakib.cls << " " << rakib.gpa << endl;
    
    return 0;
}