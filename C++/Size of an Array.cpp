// Given an array a[], find the size of the array.

// Example 1:

// Input:
// a[] = {1, 2, 3}
// Output:
// 3
// Explanation: The size of the array is 3.
 

// Example 2:

// Input:
// a[] = {1, 2, 3, 5, 4}
// Output:
// 5
// Explanation: The size of the array is 5.
 

// Your Task:

// Your task is to find the size of the array a[].

// -------------------------==============================================================-------------------

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        
// } Driver Code Ends
// User function Template for C++

// a[] : declared and initialized above

// complete the code here.
int size = sizeof(a)/sizeof(a[0]);

// driver code prints size

//{ Driver Code Starts.

        cout << size << "\n";
    }
}

// } Driver Code Ends

