// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int i,flag=-1,large=0,sl=0;
	    for(i=0;i<n-1;i++)
	    {  
	        if(arr[i]==arr[i+1])
	        {
	            flag=0;
	        }
	        else{
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0){
	        return -1;
	    }
	    else{
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]>large)
	        {
	            large=arr[i];
	        }
	       
	    }
	   
	       for(i=0;i<n;i++)
	    {     
	        if(arr[i]!=large && arr[i]>sl)
	        {
	           sl=arr[i];
	        }
	      
	    }
	    return sl;
}
}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
