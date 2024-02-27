// Question

// Given two arrays, one is array of political parties namely -  party, and their corresponding array of seats received - seats. You have to print the political parties in lexicographical sorted order along with their seats, and highest seats received by the party.

// Input Format:
// The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains three lines of input. The first line contains number of parties N. The second line contains the names of the parties. The third line contains the votes corresponding to each party.

// Output Format:
// For each testcase, in a new line, print the required answer.

// User Task:
// Your task is to complete the function Election2019(party, seats, n)  which accepts three arguments and prints the required result.

// Constraints:
// 1 <= T<= 100
// 1 <= N <= 26
// 1 <= seats <= 543

// Examples:
// Input:
// 1
// 7
// A B C D E F G
// 90 150 33 23 17 500 2
// Output:
// A 90
// B 150
// C 33
// D 23
// E 17
// F 500
// G 2
// 500

// Explanation:
// Testcase1:
// We print parties and their respective seats in lexiographically sorted order. At the end we print the maximum seats.


// Answer------------------------------------------------

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/* print the name of the parties along with seats
   they got in election and print the maximum seat
   received
*/
void Election2019(char party[], int seats[], int n)
{
    //Your code here
    map<char,int>mp;
    for(int i=0;i<n;i++){
        mp[party[i]]=seats[i];
        
    }
    for(auto x:mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
    int maximum = INT_MIN;
   for(int i=0;i<n;i++){
       if(seats[i]>maximum){
           maximum = seats[i];
       }
   }
   cout<<maximum<<endl;
}

//{ Driver Code Starts.
    
int main() {
	
		int t; 
		cin>>t;
		while(t--)
		{
		    int n; 
		    cin>>n;
		    char party[n];
		    int seats[n];
		    for(int i = 0; i < n; i++)
		        cin>>party[i]; 
		     
		    for(int i = 0; i < n; i++)
		        cin>>seats[i];
		     
		    Election2019(party, seats, n);
		}
}
// } Driver Code Ends