// Question

// You are given an array. You need to find the duplicates in that array and print them using an iterator.
// Note: Use unordered set

// Input Format:
// The first line of input contains T denoting the number of test cases. The T test cases follow. Each test case contains 2 lines of input. The 2 lines contain arr and n denoting the array and size of the array respectively.

// Output Format:
// For each test case, print the duplicate items.

// Task:
// Since this is a function problem, you don't need to take any input. Just complete the function DuplicateMe that takes the array and size of the array. The printing is done by you only using the iterator.

// Constraints:
// 1 <= T <= 100
// 1 <= n <= 100

// Example:
// Input:
// 1
// 4
// 1 1 2 2

// Output:
// 1 2

// Answer

//{ Driver Code Starts
//Initial Template for C++

// Find duplicate from an array using unordered_set 
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

//Complete the function
void DuplicateMe(int arr[], int n) 
{ 

    // Your code here
   // Use 2 sets
   unordered_set<int>s;
   unordered_set<int>s1;
   for(int i=0;i<n;i++){
       if(s.find(arr[i])==s.end()){
           s.insert(arr[i]);
       }
       else{
           s1.insert(arr[i]);
       }
       

       
   }
   for(auto x:s1){
       cout<<x<<" ";
   }
  

}


//{ Driver Code Starts. 

int main() 
{ 
  int t;
  cin>>t;
  
  while(t--){

    int n;
    cin>>n;

	int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }  

	DuplicateMe(arr, n);
	cout<<endl;
	
}
    return 0; 
} 

// } Driver Code Ends