#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,shared=5,liked=0,total_liked=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        liked=shared/2;
        total_liked+=liked;
        shared=liked*3;
    }
    cout<<total_liked<<endl;
    return 0;
}
 
