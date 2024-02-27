// // Question
// You are given 2 sets. You need to just write the swap function.

// Input Format:
// The first line of input contains T denoting the number of test cases. The T test cases follow. Each test case contains 2 lines of input. The 2 lines contain str1 and str2 denoting the strings.

// Output Format:
// For each test case, 2 sets will be printed.

// Task:
// Since this is a function problem, you don't need to take any input. Just complete the function SwapMe that takes 2 sets. The printing is done by the driver code.

// Constraints:
// 1 <= T <= 100

// Example:
// Input:
// 1
// abc
// xyz

// Output:
// xyz
// abc

// Answer -----------------------

//{ Driver Code Starts
//Initial Template for C++

// unordered_set::swap
#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

//Complete the function
void SwapMe(unordered_set<string> first, unordered_set<string> second){

    // Your code here
   // Use swap function
   swap(first,second);

  // For printing the set
  for (const string &x: first) cout << x << " ";
  cout << endl;
  for (const string &x: second) cout << x << " ";
  cout << endl;

}


//{ Driver Code Starts.

int main ()
{

  int t;
  cin>>t;
  
  while(t--){
  
  string str1;
  cin>>str1;

  string str2;
  cin>>str2;

  unordered_set<string> first;
  first.insert(str1);
  unordered_set<string> second;
  second.insert(str2);

  SwapMe(first, second);

}

  return 0;
}

// } Driver Code Ends