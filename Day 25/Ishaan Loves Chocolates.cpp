// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


int chocolates(int arr[], int n);


int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        cout << chocolates(arr, n);
        cout << endl;
        
    }

}
// } Driver Code Ends


int chocolates(int arr[], int n)
{
    // Complete the function
    int small=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
    return small;
    
}
