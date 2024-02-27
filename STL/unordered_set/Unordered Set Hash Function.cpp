// Question

// You are given a set and a string. You need to write the hash function and using that only return the hash value of the given string.

// Input Format:
// The first line of input contains T denoting the number of test cases. The T test cases follow. Each test case contains one line of input. The line contains str denoting the string.

// Output Format:
// For each test case, return the hash value of str.

// Task:
// Since this is a function problem, you don't need to take any input. Just complete the function HashMe that takes a set and a string and returns hash value of that string. The printing is done by the driver code. You may use the STL method hash_function to get the hash value.

// Constraints:
// 1 <= T <= 100

// Example:
// Input:
// 1
// FAR
// Output:
// -1651365760323248093

// answer--------------------------------------
//{ Driver Code Starts
//Initial Template for C++

// unordered_set::hash_function
#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

//Complete the function
long int HashMe (unordered_set<string> myset, string str){

    // Your code here
   // Use hash function
    unordered_set<string>::hasher fn = myset.hash_function();
    return fn(str);

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

  cout << HashMe(myset, str) << endl;

}
 
  return 0;
}

// } Driver Code Ends