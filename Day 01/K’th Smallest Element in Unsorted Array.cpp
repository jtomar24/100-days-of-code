/*K’th Smallest Element in Unsorted Array 
 
Given an array and a number k where k is smaller than the size of the array,
we need to find the k’th smallest element in the given array. 
It is given that all array elements are distinct.

*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	int arr[]={5,4,6,32};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int k=2;
    cout<<arr[k-1];
	return 0;
}
