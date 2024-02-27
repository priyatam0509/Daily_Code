// Question

// You are given an array A of size N. you need to insert the elements of A into a multiset and display the results. Also, you need to erase a given element x from the multiset and print "erased x" if successfully erased, else print "not found".

// Example 1:

// Input:
// N = 10
// A[] = 9 8 7 4 4 2 1 1 9 8
// x = 1
// Output: 
// 1 1 2 4 4 7 8 8 9 9
// erased 1
// 2 4 4 7 8 8 9 9
// Your Task:
// Since this is a function problem, you don't need to take any input. Just complete the provided functions. In a new line, print the required output.

// Constraints:
// 1 <= N <= 1000
// 1 <= Ai <= 106



// Answer----------------=======================================--------------===============================
//{ Driver Code Starts
//Initial Template for C++
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

multiset<int> multisetInsert(int arr[],int n); //Function to insert elements of array into a multiset and return a multiset


void multisetDisplay(multiset<int>s); //function to print the elements of the multiset


void multisetErase(multiset<int>&s,int x); //function to erase x from multiset if it exists


// } Driver Code Ends
//User function Template for C++


multiset<int> multisetInsert(int arr[],int n)
{
    multiset<int>s;
   //Insert elements into a multiset
   for(int i=0;i<n;i++){
       s.insert(arr[i]);
   }
    
    
    return s;
    
}


void multisetDisplay(multiset<int>s)
{
    //Multiset display print elements
    for(int x:s){
        cout<<x<<" ";
    }
    cout<<endl;
}


void multisetErase(multiset<int>&s,int x)
{
    //If and else condition to erase x from multiset
    if(s.find(x)!=s.end()){
        s.erase(x);
        cout<<"erased "<<x;
        
    }

     else
     cout<<"not found";
    
    
    cout<<endl;
}

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n]; //array of size n
        for(int i=0;i<n;i++)
        cin>>arr[i]; //Input the array
        
        multiset<int>s=multisetInsert(arr,n); //call the insert function that returns a multiset
        multisetDisplay(s);// display the inserted multiset
        int x;
        cin>>x; //x element that needs to be erased from multiset
        
        multisetErase(s,x); //try to erase x from multiset
        multisetDisplay(s); //print the multiset after erase operation
        
        
    }
	return 0;
}




// } Driver Code Ends
