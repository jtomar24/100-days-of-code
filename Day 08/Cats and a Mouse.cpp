#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int adif=abs(a-c);
        int bdif=abs(b-c);
        if(adif<bdif)
        {
            cout<<"Cat A\n";
        }
        else{
            if(bdif<adif)
            {
              cout<<"Cat B\n";  
            }
            else{
                cout<<"Mouse C\n";
            }
        }
    }
    return 0;
}
