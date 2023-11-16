#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;
    Student (char name[], int roll, char section, int math_marks, int cls)
    {
       strcpy(this->name, name);
       this->roll       = roll;
       this->section    = section;
       this->math_marks = math_marks;
       this->cls        = cls;
    }
};

int main()
{

    char s1[100] = "Tushar";
    char s2[100] = "Pranto";
    char s3[100] = "Uday";
    Student Tushar (s1, 1, 'A', 99,10);
    Student Pranto (s2, 2, 'A', 98,10);
    Student Uday   (s3, 3, 'A', 97,10);

    int mx = max({Tushar.math_marks, Pranto.math_marks, Uday.math_marks});
    char topper[100];
    if(Tushar.math_marks > Pranto.math_marks && Pranto.math_marks > Uday.math_marks)
    {
       strcpy(topper, s1);
    }
    else if(Tushar.math_marks < Pranto.math_marks && Pranto.math_marks > Uday.math_marks)
    {
      strcpy(topper, s2);
    }
    else
    { 
    strcpy(topper, s3);
    }
    cout<< topper<<" "<<mx<<endl;
    return 0;

}