// Given an unsorted array arr[] of size n having both negative and positive integers. The task is place all negative element at the end of array without changing the order of positive element and negative element.

 

// Example 1:

// Input : 
// n = 8
// arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
// Output : 
// 1  3  2  11  6  -1  -7  -5

// Example 2:

// Input : 
// n = 8
// arr[] = {-5, 7, -3, -4, 9, 10, -1, 11}
// Output :
// 7  9  10  11  -5  -3  -4  -1
 

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function segregateElements() which takes the array arr[] and its size N as inputs and store the answer in the array arr[] itself.

 

// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(n)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
       stack<int>neg;
       stack<int>pos;
       for(int i=0;i<n;i++){
           if(arr[i]<0){
               neg.push(arr[i]);
           }
           else{
               pos.push(arr[i]);
           }
       }
       int i = n-1;
       while(!neg.empty()){
           arr[i--] = neg.top();
           neg.pop();
       }
       while(!pos.empty()){
           arr[i--] = pos.top();
           pos.pop();
       }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends