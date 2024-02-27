// Given a 2D array A[ ][ ] of size N x N consisting of integers. The task is to print all the elements in matrix (row and column order) form.

// Example 1:

// Input:
// 3
// 1 2 3
// 4 5 6
// 7 8 9
// Output: 
// 1 2 3
// 4 5 6
// 7 8 9
// Explanation:
// Elements of 2D array in row-column order 
// are as mentioned in Sample Output.
 
// Your Task:

// Your task is to complete the function twoDimensional() that takes two parameters: 2D array mat and N. You need to write the parameter for 2D array and print matrix.

// Constraints:
// 1 <= T <= 10
// 1 <= N <= 100
// 1 <= A[i][j] <= 106

// -------------------------------------==============================================-------------------------------

//{ Driver Code Starts
//Initial Template for C++
#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/* Function to take input for 2D array elements
* Note : Mention matrix in argument also.
* N : size of matrix
*/
void twoDimensional(int**A,int N){
    
    // Loop to iterate through matrix
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++){
            
            // Your code here
            cout<<A[i][j]<<" ";
            
        }
        cout << endl;
    }
    
}

//{ Driver Code Starts.

// Driver code
int main() {
	
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    // Declaring mat as pointer to pointer
	    int **mat;
	
	    // mat pointer contains array of pointer to array
    	mat = new int*[N];
    	
    	// Taking input to mat[][]
    	for(int i = 0;i<N;i++){
    	    mat[i] = new int[N];
    	}
    	
    	for(int i = 0;i<N;i++){
    	    for(int j = 0;j<N;j++){
    	        cin >> mat[i][j];
    	    }
    	}
    	
    	twoDimensional(mat, N);   
	}
	
	return 0;
}
// } Driver Code Ends