/*Find the first repeating element in an array of integers

Given an array of integers, find the first repeating element in it. We need to find the element that occurs more than once and whose index of first occurrence is smallest. 

*/
#include <iostream>
using namespace std;

int main() {
	int arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
	    for(int j=i+1;j<n;j++)
	    {
	        if(arr[i]==arr[j]){
	            cout<<arr[i];
	            return arr[i];
	        }
	    }
	}

}
