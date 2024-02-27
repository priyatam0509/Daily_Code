// QUESTION

// You are given an array that contains integers. You need to print the elements of the array with in reverse order with a space between them.

// Example 1:

// Input:
// numbers = [54, 43, 2, 1, 5]
// Output: 
// 5 1 2 43 54
// Explanation: Just traverse in reverse
// and print the numbers.
// Example 2:

// Input:
// numbers = [324, 5, 2, 2]
// Output:
// 2 2 5 324
// Explanation: Just traverse in reverse
// xand print the numbers.
// Your Task: 
// Write the traversal code to print the elements of the array in reverse order. The list is provided as the parameter to the function arrayTraversalReverse. Print the elements with a space between the elements and don't give a new line as it is already provided by the driver code.

// Solution:-



//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void arrayTraversalReverse(int numbers[], int size){
    //Write your code below
    for(int i = size-1;i>=0;i--){
        cout<<numbers[i]<<" ";
    }
    
    
    
    //Don't add a new line as it is provided by the driver code
}

//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
        int numbers[n];
        for(int i = 0; i < n; i++){
            cin>>numbers[i];
        }
        arrayTraversalReverse(numbers, n);
        cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends