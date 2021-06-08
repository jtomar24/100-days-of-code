#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,s,t,a,b,m,n,ca=0,co=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int apple[m],orange[n];
    for(int i=0;i<m;i++)
    {
        cin>>apple[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>orange[i];
    }
    for(i=0;i<m;i++)
    {
        if((apple[i]+a)>=s && (apple[i]+a)<=t)
        {
            ca++;
            //cout<<ca;
        }
    }
     for(i=0;i<n;i++)
    {
        if((orange[i]+b)>=s && (orange[i]+b)<=t)
        {
            co++;
        }
    }
    cout<<ca<<endl<<co;
    return 0;
}
