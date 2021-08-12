#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=-1,min=10000;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int key=a[i];
        for(int k=i+1;k<n;k++)
        {
            if(a[k]==key)
            {
                ans=k-i;
                if(ans<min)
                {
                    min=ans;
                }
            }
        }
    }
    if(min==10000)
    {
        min=-1;
    }
    cout<<min;
    return 0;
}
