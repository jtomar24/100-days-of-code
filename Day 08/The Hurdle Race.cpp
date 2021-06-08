#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    int p=k-ar[n-1];
    if(p>=0)
    {
        cout<<0;
    }
    else
    {
        cout<<abs(p);
    }
    //cout<<m;
   // cout<<c;
    return 0;
}
