#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name[100];
    int roll;
    double cgpa;

};

int main()
{
    Student a,b;
    cin.getline(a.name,100); 
    cin >> a.roll >> a.cgpa;

    getchar();

    cin.getline(b.name,100); 
    cin >> b.roll >> b.cgpa;// from user
    // a.roll = 20;
    // a.cgpa = 4;
    // char tmp[100] = "Tushar";
    // strcpy(a.name,tmp);
    cout << a.name << "\n" << a.roll << "\n" << a.cgpa << endl;
    cout << b.name << "\n" << b.roll << "\n" << b.cgpa << endl;
    return 0;
}