#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
    int jersey_no;
    char country[100];

};

int main()
{
    Cricketer *dhoni = new Cricketer;
    dhoni -> jersey_no = 7;
    char tmp[100] = "India";
    strcpy(dhoni -> country, tmp);

    Cricketer *kholi = new Cricketer;
    kholi = dhoni;
    delete dhoni;

    cout << kholi-> jersey_no  << " " << kholi-> country << endl;
    //delete dhoni
    cout << dhoni-> jersey_no  << " " << dhoni-> country << endl;
    

    return 0;
}