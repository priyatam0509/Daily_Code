// // Question

// // You are given an array A of size N. you need to insert the elements of A into a map(element as key and index as value) and display the results. Also, you need to erase a given element x from the map and print "erased x" if successfully erased, else print "not found".

// // Example 1:

// // Input:
// // N = 10
// // A[] = 9 8 7 4 4 2 1 1 9 8
// // x = 1
// // Output: 
// // 1 7
// // 2 5
// // 4 4
// // 7 2
// // 8 9
// // 9 8
// // erased 1
// // 2 5
// // 4 4
// // 7 2
// // 8 9
// // 9 8
// // Your Task:
// // Since this is a function problem, you don't need to take any input. Just complete the provided functions. In a new line, print the required output.

// // Constraints:
// // 1 <= N <= 1000
// // 1 <= Ai <= 106

// // Answer:- 

// //{ Driver Code Starts
// //Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;


// map<int,int> mapInsert(int arr[],int n);
// void mapDisplay(map<int,int>mp);
// void mapErase(map<int,int>&mp,int x);


// // } Driver Code Ends
// //User function Template for C++


// map<int,int> mapInsert(int arr[],int n)
// {
//     map<int,int>mp;
//    //Insert arr[i] as key and i as value
//    for(int i=0;i<n;i++){
//        mp[arr[i]]=i;
//    }
    
    
//     return mp;
    
// }


// void mapDisplay(map<int,int>mp)
// {
//     //Print every key and value pair in a new line
//     for(auto x:mp){
//         cout<<x.first<<" "<<x.second<<endl;
//     }
 
// }


// void mapErase(map<int,int>&mp,int x)
// {
//    //Write the if and else condition to erase x from map
//    if(mp.find(x)!=mp.end()){
//        mp.erase(x);
//        cout<<"erased "<<x;
       
//    }
   
    
//     //else condition
//     else
//     cout<<"not found";
    
    
//     cout<<endl;
// }

// //{ Driver Code Starts.

// int main() {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int arr[n]; 
//         for(int i=0;i<n;i++)
//             cin>>arr[i]; //Taking input array
        
//         map<int,int>mp=mapInsert(arr,n); //map insert function that returns a function
//         mapDisplay(mp); //print the keys and values of the map
//         int x;
//         cin>>x; //element to be erased
        
//         mapErase(mp,x); //the erase function
//         mapDisplay(mp);
        
        
//     }
// 	return 0;
// }

// // } Driver Code Ends