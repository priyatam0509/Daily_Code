// Given two integers A and B. The task is to swap two numbers. Swapping here means to interchange the values of A and B.
 

// Example 1:

// Input:
// A = 3 
// B = 5
// Output: 
// 5 3
// Explanation:
// Here, A = 3 and B = 5.
// After swapping A = 5 and B = 3.
// Your Task:
// Your task is to complete the two swap() functions, such that values of A and B gets interchanged.

// Constraints:
// 1 <= A, B <= 106

// ============================---------------------------------=====================================
//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

// Function prototype
void swap(int*, int*);
void swap(int&, int&);


// } Driver Code Ends
//User function Template for C++

// Function to swap A and B
// using pointers
void swap(int *A, int *B){
    
    // Your code here
    int c;
    c=*A;
    *A=*B;
    *B=c;
    
}

// Function to swap A and B
// using reference
void swap(int &A, int &B){
  
    // Your code here
    int C;
    C=A;
    A=B;
    B=C;
  
}


//{ Driver Code Starts.

// Driver code
int main() {
	
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    int A, B;
	    cin >> A >> B;
	    
	    // Swapping by reference
	    swap(A, B);
	    cout << A << " " << B << endl;
	    
	    // Swap by pointers
	    swap(&A, &B);
	    
	    cout << A << " " << B << endl;
	}
	
	return 0;
}
// } Driver Code Ends