// Given a variable 'a', we will print the variable through its address.

// Example 1:

// Input:
// a = 4
// Output: 
// 4
// Example 2:

// Input:
// a = 61
// Output: 
// 61
// Your Task:
// You just have to complete the statement 'address = ' by providing address location of 'a' .

// =======================================----------------------------------===============================

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int a;
        cin >> a;
        int *address;
	    
	    
// } Driver Code Ends
//User function Template for C++


// int a;
// cin >> a;
// int *address;
	
// we have to store address of 'a' below
address = &a;

// cout << *address << endl;

//{ Driver Code Starts.
	    
	    cout << *address << endl;
	
	    
	}
	
	
	
	return 0;
}
// } Driver Code Ends