// You are given an array that contains integers. You need to decrement each element of the array by 1 and return the array.
// Example 1:

// Input:
// numbers = [54, 43, 2, 1, 5]
// Output: 
// 53 42 1 0 4
// Explanation: Just decrement the numbers
// by 1.
// Example 2:

// Input:
// numbers = [324, 5, 2, 2]
// Output:
// 323 4 1 1
// Explanation: Just decrement the numbers
// by 1.
// Your Task: 
// Write the code to decrement each element of the array by 1 and return the array. The driver code will print the output.
// =-----======================------------------------------------------------------==============================---------------------

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int * decrementArrayElements(int numbers[], int size){
    
    //write your code here
    for(int i=0;i<size;i++){
        numbers[i] = numbers[i]-1;
    }
    return numbers;
    
    
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
        int *res;
        res = decrementArrayElements(numbers, n);
        for(int i = 0; i < n; i++){
            cout << *(res + i) << " ";
        }
        cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends
