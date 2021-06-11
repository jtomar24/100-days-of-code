#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,h=1,p=0;
        cin>>n;
        if(n==0)
        {
            cout<<1<<endl;
           // break;
        }
        else{
           for(int i=1;i<=n;i++)
        {
            if(i%2!=0)
            {
                h=h*2;
                
                
            }
            else{
                h++;
            }
        }  
        cout<<h<<endl;
        }
       
    }

    return 0;
}
