#include <bits/stdc++.h>
using namespace std;

// Function to get an array of size N
int* get_array(int N) 
{
    int* arr = new int[N]; // Dynamically allocate memory for the array

    cout << "Enter " << N << " numbers: ";
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    return arr;
}

int main()
 {
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;

    int* resultArray = get_array(N); // Call the function to get the array

    // Print the values of the array
    cout << "Values of the array are: ";
    for (int i = 0; i < N; i++)
    {
        cout << resultArray[i] << " ";
    }
    // Don't forget to free the allocated memory
    delete[] resultArray;

    return 0;
}

