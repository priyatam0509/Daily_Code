// There are many times when we need to take input of a string that contains multiple words.
// Here, we will learn how to take input of a string that comprises of multiple words. Your task is to take input of string with multiple words.

// Example 1:

// Input: a = hello world
// Output: hello world

// Example 2:

// Input: a = Welcome to GeeksForGeeks
// Output: Welcome to GeeksForGeeks
// Your Task:
// Your task is to complete the function getLine() to take input of string.

// ==============================-==============================--------------------------------------------
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
    // Take input of 'a' using getline
    getline(cin,a);

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