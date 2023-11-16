#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // first You have to declare a variable for counting
    int count[26] = {0};
    
    
    // then iterating the loop for taking input and counting the value. 
    for(int i=0; i<n; i++)
    {   
        char ch; 
        cin>>ch; 
        
        //nutralizing the character to the 0; 
        int value = ch - 'a';
        count[value]++;
    }
    
    
    // iterating the loop till 26 because alphabet is 26 we can receive any of the latter's counting from our input.  
    for(int i = 0; i < 26; i++){
        
        //separating the value which have at least one count; 
        while(count[i] != 0)
        {
            cout<<char(i+97);
            
            //which we have counted just decreasing the value to the zero for avoiding to count the same character again and again. 
            count[i]--;
        }
    }
    return 0;
}
//Space limit exceeded

