// Given an array A[] of N elements. The task is to return the count of the number of odd and even elements in the array.

// Example:

// Input:
// N = 5
// A[] = 1 2 3 4 5
// Output:
// 3 2
// Explanation:
// There are 3 odd elements (1, 3, 5)
// and 2 even elements (2 and 4).

// Your Task:
// Your task is to complete the function countOddEven() which should return the count of odd and even elements of the array.

// Expected Time Complexity: O(N)
// Expected Space Complexity: O(1)

// Constraints:
// 1 <= N <= 106
// 1 <= Ai <= 10
// -------------------------------------------------------------------------------------------------------------
//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    /*Function to count even and odd elements in the array
    * arr : Array with its elements
    * sizeof_array : number of array elements
    * countOdd : variable to count number of odd elements
    * countEven : variable to count number of even elements
    */
    vector<int> countOddEven(int arr[], int sizeof_array)
    {
        // your code here
        vector<int>v;
        int odd=0;
        int even = 0;
        for(int i=0;i<sizeof_array;i++){
            if(arr[i]%2!=0)
              odd++;
            else if(arr[i]%2==0)
            even++;
        }
        v.push_back(odd);
        v.push_back(even);
        return
        
    }
};

//{ Driver Code Starts.
int main() {
	
	// Testcase input
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    int sizeof_array;
	    cin >> sizeof_array;
	    
	    int arr[sizeof_array];
	    
	    // Array elements input
	    for(int i = 0; i < sizeof_array; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    // Calling function to count even and odd
	    vector<int> res = ob.countOddEven(arr, sizeof_array);
	    for(auto t:res)
	    {
	        cout<<t<<" ";
	    }
	    cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends