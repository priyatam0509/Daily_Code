// Rahul loves to play with numbers, he challenges his friend Ankush with a problem related to numbers in which he has to first reverse the order of two digits and then swap them. Let us take the two digits as a and b.

// Example 1:

// Input:
// a = 1234 
// b = 67890
// Output: 
// 9876 4321
// Explanation: Reversing the given two numbers
// will give: 4321 and 9876. After swapping it
// would come as: 9876 and 4321.

// Example 2:

// Input:
// a = 10000 
// b = 3254
// Output: 
// 4523 1
 

// Your Task: Complete the two functions reverse_dig() and swap() with arguments as a and b references. Don't return anything to the function.

// =================================-===============-------------------------==========================--------------

//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++
int reverse(int a){
    int res =0;
    
    while(a>0){
        res=res*10+(a%10);
        a=a/10;
        
        
    }
    return res;
}

void reverse_dig(int &a,int &b)
{
    //Add your code here.
    a=reverse(a);
    b = reverse(b);
    
}
void swap(int &a,int &b)
{
    //Add your code here.
    int temp =a;
    a=b;
    b=temp;
}


//{ Driver Code Starts.

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
	    cin>>a>>b;
	
	    reverse_dig(a,b);
	    swap(a,b);
	    cout<<a<<" "<<b<<endl;
    }
	return 0;
}
// } Driver Code Ends