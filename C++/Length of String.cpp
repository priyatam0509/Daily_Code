// You are given a string s. You need to find the length of the string.

// Example 1:

// Input:
// s = Geeks
// Output: 
// 5
// Example 2:

// Input:
// s = Hello1234
// Output: 
// 9
// Your Task:
// You only need to complete the function lengthString() that takes s as parameter and returns the length of the string. 

// Expected Time Complexity: O(1).
// Expected Auxiliary Space: O(1).

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
    int lengthString(string str)
    {
        //Your code here
        return str.length();
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    
	string s;
	cin >> s;
	Solution obj;
	cout << obj.lengthString(s) << endl;
	}
	
	return 0;
	
}


// } Driver Code Ends