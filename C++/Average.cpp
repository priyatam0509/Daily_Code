// You are given a list numbers that contains integers. You need to return average of the non negative integers.

// Example 1:

// Input:
// numbers = [-12, 8, -7, 6, 12, -9, 14]
// Output:
// avg = 10.0
// Explanation: The positive numbers are 
// 8 6 12 14. The sum is 8+6+12+14 = 40, 
// Average = 40/4 = 10.0

// Example 2:

// Input:
// numbers = [1, 2, 3]
// Output:
// avg = 2.0
// Explanation: The positive numbers are 
// 1 2 3. The sum is 1+2+3 = 6, 
// Average = 6/3 = 2.0
// Your Task:
// Write the code at the mentioned place and return the average of the positive numbers. The function posAverage takes numbers list as an argument and expects average of non negative numbers as a return value.

// ===================================================---------------------------------------================================
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

double posAverage(vector<int> nums) {
    // code here
    int pos =0;
    int sum =0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]>=0){
            sum+=nums[i];
            pos++;
        }
    }
    
    double avg = ((double)sum)/((double)pos);
    return avg;
}


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    string s;
    getline(cin, s);
    while (t--) {
        string str;
        getline(cin, str);
        vector<int> nums;
        istringstream ss(str);

        string num;
        while (ss >> num) {
            nums.push_back(stoi(num));
        }

        double avg = posAverage(nums);
        avg = ((int)(avg * 100)) / 100.0;
        printf("%.2f\n", avg);
    }

    return 0;
}
// } Driver Code Ends