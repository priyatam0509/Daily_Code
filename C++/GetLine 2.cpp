// You are given with a string that is in email format. Here, you have to take input of a string till the '@' character.

// Example 1:

// Input: a = hello_world@xyz.com
// Output: hello_world

// Example 2:

// Input: a = geeksforgeeks@gfg.com
// Output: geeksforgeeks
// Your Task:
// Your task is to complete the function getLine() to take input of string upto @.

// ===============================--------------------------------------------------------============----------------
//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// Function to take input of string using getline
void getLine() {

    string a;

    // Your code here
    // Take input of 'a' using getline till '@''
    getline(cin,a,'@');

    cout << a << endl;
}

//{ Driver Code Starts.

// Driver Code
int main() {
    // Number of testcase input
    int t;
    cin >> t;
    cin.ignore(); // Ignoring the newline so it isn't consumed by getline. Read
                  // about it!!
    while (t--) {
        getLine();
    }

    return 0;
}
// } Driver Code Ends