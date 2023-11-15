#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
      this->roll  = roll;
      this->cls = cls;
      this->gpa = gpa;   
    }
};

int main()
{
    Student *Tushar = new Student(75, 5, 5);
    cout << Tushar->roll <<" " << Tushar->cls << " " << Tushar->gpa << endl;
    return 0;
}