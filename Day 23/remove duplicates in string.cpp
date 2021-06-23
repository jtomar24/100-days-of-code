#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1;
    int n=str1.length();
    
    cout<<str1[0];
    for(int i=1;i<n;i++)
    {
        int flag=0;
     for(int j=i-1;j>=0;j--)
     {   
         
         if(str1[i]==str1[j])
         {
             flag=1;
         }
    }
      if(flag==0)
         {
             cout<<str1[i];
         }
    }
   return 0;
}
