// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int multiply(int arr[], int n);


int main() {
	//code
	int t;
	cin>>t;
	while (t--)
	{
	    int n,sum1=0,sum2=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    cout << multiply(a, n) << endl;
	    
	}
	return 0;
}// } Driver Code Ends


//User function Template for C++

int multiply(int arr[], int n)
{
    // Complete the function
    int mid=n/2;
    int s1=0,s2=0;
    for(int i=0;i<n;i++)
    {
        if(i<mid)
        {
            s1=s1+arr[i];
        }
        else
        {
            s2=s2+arr[i];
        }
    }
    return s1*s2;
}
