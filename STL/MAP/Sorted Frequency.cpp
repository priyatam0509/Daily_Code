// //Question
// You are given an array arr of size n. You need to print the distinct elements of array in sorted order(increasing) together with their frequency.

// Example:

// Input:
// 6
// 3 3 2 2 1 4

// Output:
// (1,1) (2,2) (3,2) (4,1)

// Explanation:
// 3 appears 2 times. 2 appears 2 times. 1 appears 1 time, and 
// 4 appears 1 time. So in sorted order we write elements and 
// their frequencies. So the answer is (1,1) (2,2) (3,2) (4,1).
// Your Task:
// This is a function problem. You need to complete the function freqSorted that takes array and n as parameters and prints the distinct elements in sorted order together with their frequencies. The newline is provided by the driver code. Please take care of the output format "(key,value)" as mentioned in the example.

// Constraints:
// 1 ≤ n ≤ 104

//Answer -----------------------------------------------------------

//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Complete this function
    void freqSorted(int arr[], int n)
    {
       //Your code here
       map<int,int>mp;
       for(int i=0;i<n;i++){
           mp[arr[i]]++;
       }
       for(auto x:mp){
           cout<<"("<<x.first<<","<<x.second<<")"<<" ";
       }
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
        ob.freqSorted(arr,n);
        
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends