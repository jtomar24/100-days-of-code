// { Driver Code Starts
//Initial Template for C++

// C++ program to check if n is sparse or not
#include<iostream>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

// function to check if the number is sparse
// n : is the number to check if it is sparse
bool isSparse(int n){
 //   int a[1000];
    // Your code
 int a[10000];
 for(int i=0;n>0;i++)
 {
     a[i]=n%2;
     n=n/2;
     cout<<a[i];
 }
 for(int i=1;i<1000;i++){
     if(a[i]==1&&a[i-1]==1)
     {
         return 0;
         break;
     }
     else{
         return 1;
     }
 }
}


// { Driver Code Starts.

// Driver Code
int main()
{
    int t,n;
    
    //testcases
    cin>>t;
    while(t--)
    {
        //initializing n
        cin>>n;
        
        //printing 1 if isSparse() returns true
        //else 0
        if(isSparse(n)){
            cout << "1" << endl;
        }
        else cout << "0" << endl;
        
    }
    return 0;
}
  // } Driver Code Ends
