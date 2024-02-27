// QUestion

// You are given an array A of size N. you need to insert the elements of A into a set and display the results. Also, you need to erase a given element x from the set and print "erased x" if successfully erased, else print "not found".

// Example 1:

// Input:
// N = 10
// A[] = 9 8 7 4 4 2 1 1 9 8
// x = 1
// Output: 
// 1 2 4 7 8 9
// erased 1
// 2 4 7 8 9
// Your Task:
// Since this is a function problem, you don't need to take any input. Just complete the provided functions. In a new line, print the required output.

// Constraints:
// 1 <= N <= 1000
// 1 <= Ai <= 106

//Soln:-


//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

set<int> setInsert(int arr[],int n); //Function to insert elements of array into a set and return a set


void setDisplay(set<int>s); //function to print the elements of the set


void setErase(set<int>&s,int x); //function to erase x from set if it exists


// } Driver Code Ends
//User function Template for C++


set<int> setInsert(int arr[],int n)
{
    set<int>s;
    
    //Your code here to insert arr into s
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    
    return s;
    
}


void setDisplay(set<int>s)
{
    //Your code here to display elements of s
    for(int x:s){
        cout<<x<<" ";
    }
    cout<<endl;
}


void setErase(set<int>&s,int x)
{
   //write if condition here
   if(s.find(x)!=s.end()){
   s.erase(x);
    cout<<"erased "<<x;}
    
    //write else condition here
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
        
        set<int>s=setInsert(arr,n); //call the insert function that returns a set
        setDisplay(s);// display the inserted set
        int x;
        cin>>x; //x element that needs to be erased from set
        
        setErase(s,x); //try to erase x from set
        setDisplay(s); //print the set after erase operation
        
        
    }
	return 0;
}

// } Driver Code Ends