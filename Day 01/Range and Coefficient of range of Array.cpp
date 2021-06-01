/*Range and Coefficient of range of Array

Given an array arr of integer elements, the task is to find the range and coefficient of range of the given array where: 
Range: Difference between the maximum value and the minimum value in the distribution. 
Coefficient of Range: (Max – Min) / (Max + Min).
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	int arr[]={3,43,56,2,35,77,46};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int min=arr[0];
    int max=arr[n-1];
    float range = max - min;
    float coeffOfRange = range / (max + min);
    cout<<coeffOfRange<<" "<<range;
    return 0;
}
