#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int b,w,bc,wc,z,r1,r2;
        cin>>b>>w>>bc>>wc>>z;
        //cout<<b<<w<<bc<<wc<<z;
        if(bc<(wc+z))
        {
            r1=b*bc;
        }
        else{
            r1=b*(wc+z);
        }
        if(wc<(bc+z))
        {
            r2=w*wc;
        }
        else{
            r2=w*(bc+z);
        }
        cout<<r1+r2<<endl;
    }
    return 0;
}
//b*min(bc, wc+z) + w*min(wc,bc+z)
