#include <bits/stdc++.h>
using namespace std;

namespace Rakib
{
    int age = 22;

    void hello()
    {
        cout << "Rakib Namespace" << endl;
    }
}

namespace Shakib
{
    int age2 = 24;

    void hello2()
    {
        cout << "Shakib Namespace" << endl;
    }
}

using namespace Rakib;
using namespace Shakib;
int main()
{
    cout << age << endl;
    cout << age2 << endl;
    return 0;
}