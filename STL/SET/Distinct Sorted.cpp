// QUestion

// You are given an list arr of size n. You need to print the distinct elements of arr in sorted order(non-decreasing).

// Example 1:

// Input:
// 6
// 3 3 2 2 1 4

// Output:
// 1 2 3 4

// Explanation:
// All distinct in sorted order.
// Example 2:

// Input:
// 5
// 12 23 12 23 2

// Output:
// 2 12 23

// Explanation:
// All distinct in sorted order.
// Your Task:
// This is a function problem. You need to complete the function uniqueSorted that takes arr and n as arguments and returns a list of the distinct elements in sorted order. The newline is provided by the driver code.

// Constraints:
// 1 ≤ n ≤ 104

// Answer:--

//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Complete this function
    vector<int> uniqueSorted(int arr[], int n)
    {
        //Your code here
        vector<int>v;
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        for(int x:s){
            v.push_back(x);
        }
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];
        Solution ob;
        vector<int>ans=ob.uniqueSorted(arr,n);
        for(auto i:ans)
        cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends