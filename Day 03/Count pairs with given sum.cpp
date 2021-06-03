/*Given an array of integers, and a number ‘sum’, find the number of pairs of integers in the array whose sum is equal to ‘sum’.*/
#include <iostream>
using namespace std;

int main() {
	int arr[] = {1, 5, 7, -1};
    int sum = 6,c=0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum){
               c++; 
            }
        }
    }
    cout<<c;
	return 0;
}
