#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[26];
    string str;
    for(int i=0;i<26;i++)
    {
        cin>>a[i];
    }
    
    cin>>str;
    int n=str.length();
    int max=0;
    for(int i=0;i<n;i++)
   {
       int key=str[i]-97;
       if(a[key]>max)
       {
           max=a[key];
       }
   }
   int area=n*max;
   cout<<area;
return 0;
}
