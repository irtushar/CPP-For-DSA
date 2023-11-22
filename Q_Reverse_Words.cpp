#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool first_word = true;
    
    while (ss >> word)
    {
        int i = 0, j = word.size() - 1;
        while (i < j)
        {
            char temp = word[i];
            word[i] = word[j];
            word[j] = temp;
            i++;
            j--;
        }
        if (!first_word)
        {
            cout << ' ';
        }
        cout << word;
        first_word = false;
    }

    return 0;
}