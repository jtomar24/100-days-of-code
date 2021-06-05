/*count the frequency of all the no.s*/
//hashing
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int a[]={1,1,2,1,2,5};
    int n=sizeof(a)/sizeof(a[0]);
    int freq[n]={0};
    for(int i=0;i<n;i++)
    {
      freq[a[i]]++;
    }
    for(int i=0;i<6;i++)
    {
        if(freq[i]!=0)
        {
            cout<<i<<" "<<freq[i]<<endl;
        }
    }
    return 0;
}
