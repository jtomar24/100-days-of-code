#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]); 
    int i, j;
    printf(" Repeating elements are ");
    for(i = 0; i <n; i++)
        for(j = i + 1; j < n; j++)
        if(arr[i] == arr[j])
            cout << arr[i] << " ";
    return 0;
}
  
