#include <bits/stdc++.h>
using namespace std;

class Person
{
    public:
       string name;
       int age;
       Person(string name, int age)
       {
          this -> name = name;
          this -> age = age;
       }
};

int main()
{
    Person* rakib = new Person("Rakib Ahsan", 25);
    Person* ifath = new Person("Ifath Rahman", 22);
    
    // rakib = ifath;
    // rakib -> name = ifath -> name;
    // rakib -> age = ifath -> age;

    *rakib = *ifath;
    delete ifath;
    cout << rakib -> name << "\n" << rakib -> age << endl;
    return 0;
}