/*Given an array, rotate the array by one position in clock-wise direction.*/
# include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<arr[n-1]<<" ";
    for(int i=0;i<n-1;i++)
    {
       cout<<arr[i]<<" ";
    }
}
