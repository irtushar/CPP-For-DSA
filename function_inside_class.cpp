#include <bits/stdc++.h>
using namespace std;

class Person
{
    public:
       string name;
       int age;
       int marks1;
       int marks2;

       Person(string nm, int ag, int m1, int m2)
       {
          name = nm;
          age = ag;
          marks1 = m1;
          marks2 = m2;
       }

       void hello()
       {
          cout << name << "\n" << age << "\n" << marks1 << "\n" << marks2 << endl;
       }

       int total_marks()
       {
          return marks1 + marks2;
       }
};

int main()
{
    Person tushar("Ifath Rahman", 22, 99, 100);
    
    tushar.hello();
    cout << tushar.total_marks() << endl;

    //cout << tushar.name << " " << tushar.age << endl;
    return 0;
}