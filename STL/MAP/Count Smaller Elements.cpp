
// //Question

// Given an array Arr of size N containing positive integers. Count number of smaller elements on right side of each array element.

// Example 1:

// Input:
// N = 7
// Arr[] = {12, 1, 2, 3, 0, 11, 4}
// Output: 6 1 1 1 0 1 0
// Explanation: There are 6 elements right
// after 12. There are 1 element right after
// 1. And so on.
// Example 2:

// Input:
// N = 5
// Arr[] = {1, 2, 3, 4, 5}
// Output: 0 0 0 0 0
// Explanation: There are 0 elements right
// after 1. There are 0 elements right after
// 2. And so on.
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function constructLowerArray() which takes the array of integers arr and n as parameters and returns an array of integers denoting the answer.

// Expected Time Complexity: O(N*logN)
// Expected Auxiliary Space: O(N)

// Answer ------------------------------------------------------------------------

//{ Driver Code Starts
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> constructLowerArray(int *arr, int n) {
	    // code here
	    vector<int>ans;
	    if(n==0)
	    return ans;
	    vector<int>sorted;
	    sorted.push_back(arr[n-1]);
	    ans.push_back(0);
	    for(int i=n-2;i>=0;i--){
	        auto it = lower_bound(sorted.begin(),sorted.end(),arr[i]);
	        ans.push_back(it - sorted.begin());
	        sorted.insert(it,arr[i]);
	    }
	    reverse(ans.begin(),ans.end());
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.constructLowerArray(arr, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends