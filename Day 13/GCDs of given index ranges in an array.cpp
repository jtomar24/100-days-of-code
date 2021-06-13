#include<bits/stdc++.h>
using namespace std;
 
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 

int findGCD(int arr[], int n,int qs,int qe)
{
    int result = arr[qs];
    for (int i = qs; i <= qe; i++)
    {
        result = gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}
   
int main()
{
    int arr[] = {4, 2, 50, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]); 
    int qs=1,qe=3;
    cout << findGCD(arr, n, qs, qe) << endl;
    return 0;
}
  
