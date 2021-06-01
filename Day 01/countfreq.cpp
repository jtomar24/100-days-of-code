/*Find the frequency of a number in an array

Given an array, a[], and an element x, find a number of occurrences of x in a[].*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	int arr[]={6,5,4,6,6,32,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=6,count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            count++;
        }
    }
    cout<<count;
	return 0;
}
