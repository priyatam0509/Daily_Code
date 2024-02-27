// Question

// You are given a set. You need to write the size function and using that only return the size of the given set.

// Input Format:
// The first line of input contains T denoting the number of test cases. The T test cases follow. Each test case contains one line of input. The line contains str denoting the string.

// Output Format:
// For each test case, return the size of set.

// Task:
// Since this is a function problem, you don't need to take any input. Just complete the function SizeMe that takes a set and returns size of that set. The printing is done by the driver code. You may use the STL method size to get the result.

// Constraints:
// 1 <= T <= 100

// Example:
// Input:
// 1
// "abc"
// Output:
// 1

// Answer ---------------------------

//{ Driver Code Starts
//Initial Template for C++

// unordered_set::size
#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

//Complete the function
int SizeMe(unordered_set<string> myset){

    // Your code here
   // Use size function
   return myset.size();

}


//{ Driver Code Starts.

int main ()
{

  int t;
  cin>>t;
  
  while(t--){

  string str;
  cin>>str;

  unordered_set<string> myset;

  myset.insert(str);

  cout<<SizeMe(myset)<<endl;

  }
  
  return 0;
}

// } Driver Code Ends