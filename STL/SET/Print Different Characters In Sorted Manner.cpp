// QUestion

// Given a string str, return the string with all distinct characters from the string without using sorting algorithm.

// Example 1:

// Input:
// abdbc

// Output:
// abcd
// Example 2:

// Input:
// fdfdfd

// Output:
// df
// User-task:

// This is a function problem. You need to complete the function sorted_characters that takes a string as parameter and returns a string.

// Constraints:
// 1 <= |str| <= 50

// Answer-------------------------------------------------------------------------------

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


//Complete this function
string Sorted_Characters(string str)
{
    // Your Code Here
    string str1 = "";
    set<char>s;
    for(int i=0;i<str.length();i++){
        s.insert(str[i]);
    }
    for(char x:s){
        str1=str1+x;
    }
    return str1;
}


//{ Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    
	    string str;
	    cin>>str;
	    
	    string result;
	    result=Sorted_Characters(str);
	    cout<<result;
	    
	    cout<<endl;
	}
	return 0;
}
// } Driver Code Ends