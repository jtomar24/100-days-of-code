#include<iostream>
using namespace std;
int main()
{
    long long int a[10000];
    long int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
      sum=sum+a[i];
    }
    cout<<sum;
    return 0;
}
