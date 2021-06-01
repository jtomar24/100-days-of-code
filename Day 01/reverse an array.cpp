/*Write a program to reverse an array or string*/
#include <iostream>
using namespace std;

int main() {
	int arr[]={5,4,6,32};
	int n=sizeof(arr)/sizeof(arr[0]);
	int brr[n];
	int j=0;
	for(int i=n-1;i>=0;i--)
	{
	    brr[j]=arr[i];
	    j++;
	}
	for(int i=0;i<n;i++)
	{
	 cout<<brr[i]<<" ";   
	}
	return 0;
}
