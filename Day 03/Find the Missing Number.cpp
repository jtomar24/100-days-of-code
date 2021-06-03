/*You are given a list of n-1 integers and these integers are in the range of 1 to n.
There are no duplicates in the list. One of the integers is missing in the list.
Write an efficient code to find the missing integer.*/
#include <iostream>
using namespace std;

int main() {
	int a[] = {1,2,3,5,6};
	int sum=0,total=0;
	int n = sizeof(a) / sizeof(a[0]);
    int x=a[n-1];
    total=(x*(x+1))/2;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<(total-sum)<<" ";
	return 0;
}
