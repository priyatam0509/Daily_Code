// You are given a string s. You need to reverse the string.

// Example 1:

// Input:
// s = Geeks
// Output: skeeG
// Example 2:

// Input:
// s = for
// Output: rof
// Your Task:

// You only need to complete the function reverseWord() that takes s as parameter and returns the reversed string.

// Expected Time Complexity: O(|S|).
// Expected Auxiliary Space: O(1).

//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        int n = str.length();
        string res ="";
        for(int i=n-1;i>=0;i--){
            res+=str[i];
        }
        return res;
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
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends