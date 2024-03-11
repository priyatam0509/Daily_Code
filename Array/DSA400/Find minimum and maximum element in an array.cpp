// Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.

 

// Example 1:

// Input:
// N = 6
// A[] = {3, 2, 1, 56, 10000, 167}
// Output: 1 10000
// Explanation: minimum and maximum elements of array are 1 and 10000.
 

// Example 2:

// Input:
// N = 5
// A[]  = {1, 345, 234, 21, 56789}
// Output: 1 56789
// Explanation: minimum and maximum element of array are 1 and 56789.
 

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function getMinMax() which takes the array A[] and its size N as inputs and returns the minimum and maximum element of the array.

//  output ----------------------------------------------
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    pair<long long, long long> getMinMax(long long arr[], int n) {
        // code here
        long long i,max,min;
        max=min=arr[0];
        for(i=1;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
            else if(arr[i]<min){
                min = arr[i];
            }
        }
        pair<long long, long long> p = {min,max};
        return p;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(a, n);
        
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends