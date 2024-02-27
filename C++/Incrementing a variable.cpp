// Given a variable 'a', the task is to make a function updateVar() which will increment the value of the variable by 10. The function should not return anything.

// Example 1:

// Input:
// 11
// Output: 
// 21

// Example 2:

// Input:
// 224
// Output:
// 234
// User Task:
// Since this is a functional problem you don't have to worry about input, you just have to write the function updateVar(). Driver code will call the function as updateVar(a).

// ==================================-------------------------====-------------------------------------------------

//{ Driver Code Starts
//Initial Template for C++


#include<iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//You need to increment the value stored in the variable by 10 

/* write the function below */

// write your code here

void updateVar(int &a){
    int *c=&a;
    *c=*c+10;
}


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int a;
        cin>>a;
        updateVar(a);
        cout<<a<<"\n";
    }
    return 0;
}
// } Driver Code Ends
