// Question

// You are given an array A of size N. you need to insert the elements of A into a multimap(element as key and index as value) and display the results. Also, you need to erase a given element x from the multimap and print "erased x" if successfully erased, else print "not found".

// Example 1:

// Input:
// N = 10
// A[] = 9 8 7 4 4 2 1 1 9 8
// x = 1
// Output: 
// 1 6
// 1 7
// 2 5
// 4 3
// 4 4
// 7 2
// 8 1
// 8 9
// 9 0
// 9 8
// erased 1
// 2 5
// 4 3
// 4 4
// 7 2
// 8 1
// 8 9
// 9 0
// 9 8
// Your Task:
// Since this is a function problem, you don't need to take any input. Just complete the provided functions. In a new line, print the required output.

// Constraints:
// 1 <= N <= 1000
// 1 <= Ai <= 106


//Answer -----------------------------------------------------------------------------------------------

//{ Driver Code Starts
//Initial Template for C++
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


multimap<int,int> multimapInsert(int arr[],int n);
void multimapDisplay(multimap<int,int>mp);
void multimapErase(multimap<int,int>&mp,int x);

// } Driver Code Ends
//User function Template for C++



multimap<int,int> multimapInsert(int arr[],int n)
{
    multimap<int,int>mp;
   //Insert arr[i] as key and i as value in the multimap 
   for(int i=0;i<n;i++){
       mp.insert({arr[i],i});
   }
    
    
    return mp;
    
}


void multimapDisplay(multimap<int,int>mp)
{
    //Print the keys and value pairs in new line
    for(auto x:mp){
        cout<<x.first<<" "<<x.second<<endl;
    }

}


void multimapErase(multimap<int,int>&mp,int x)
{
   //If and else condition to erase x from the multimap
   if(mp.find(x)!=mp.end()){
       mp.erase(x);
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
        int arr[n]; 
        for(int i=0;i<n;i++)
        cin>>arr[i]; //Taking input array
        
        multimap<int,int>mp=multimapInsert(arr,n); //multimap insert function that returns a function
        multimapDisplay(mp); //print the keys and values of the multimap
        int x;
        cin>>x; //element to be erased
        
        multimapErase(mp,x); //the erase function
        multimapDisplay(mp);
        
        
    }
	return 0;
}
// } Driver Code Ends
