// Given a string str containing alphanumeric characters. The task is to calculate the sum of all the numbers present in the string.

// Example 1:

// Input:
// str = 1abc23
// Output: 24
// Explanation: 1 and 23 are numbers in the
// string which is added to get the sum as
// 24.
// Example 2:

// Input:
// str = geeks4geeks
// Output: 4
// Explanation: 4 is the only number, so the
// sum is 4.
// Your Task:
// The task is to complete the function findSum() which finds and returns the sum of numbers in the string.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

// ===----------------------=================================================
//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	 string temp = "";
 
    // holds sum of all numbers present in the string
    int sum = 0;
 
    // read each character in input string
    for (char ch : str) {
        // if current character is a digit
        if (isdigit(ch))
            temp += ch;
 
        // if current character is an alphabet
        else {
            // increment sum by number found earlier
            // (if any)
            sum += atoi(temp.c_str());
 
            // reset temporary string to empty
            temp = "";
        }
    }
 
    // atoi(temp.c_str()) takes care of trailing
    // numbers
    return sum + atoi(temp.c_str());
    	
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}

// } Driver Code Ends