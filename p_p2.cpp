#include <bits/stdc++.h>
using namespace std;

int main()
 {
    int N;

    // Input size of array A
    cout << "Enter the size of array A: ";
    cin >> N;

    // Input array A
    int* A = new int[N];
    cout << "Enter " << N << " elements for array A: ";
    for (int i = 0; i < N; i++) 
    {
        cin >> A[i];
    }

    int M;
    // Input size of array B
    cout << "Enter the size of array B: ";
    cin >> M;

    // Create array B and copy elements from array A
    int* B = new int[M];
    for (int i = 0; i < N && i < M; i++)
    {
        B[i] = A[i];
    }

    // Delete array A
    delete[] A;

    // Input remaining elements of array B
    cout << "Enter the remaining " << M - N << " elements for array B: ";
    for (int i = N; i < M; i++)
    {
        cin >> B[i];
    }

    // Print array B
    cout << "Array B: ";
    for (int i = 0; i < M; i++)
    {
        cout << B[i] << " ";
    }
    // Delete array B
    delete[] B;

    return 0;
}
