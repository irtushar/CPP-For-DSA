#include <bits/stdc++.h>
using namespace std;

int* sort_it(int n) 
{
  int* arr=new int[n];
  for (int i = 0; i < n; i++) 
  cin >> arr[i];
  
  // Sort the array in descending order
  sort(arr, arr + n, greater<int>());
  return arr;
};

int main() 
{
  int n;
  cin >> n;
  // Call the sort_it() function to sort the array in descending order
  int* sorted_arr = sort_it(n);

  // Print the sorted array
  for (int i = 0; i < n; i++) 
  {
    cout << sorted_arr[i] << " ";
  }
  cout << endl;

return 0;
}