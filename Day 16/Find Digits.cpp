#include <bits/stdc++.h>

using namespace std;


int main()
{
  int t;
  cin>>t;
    while(t--)
     {
        long long int n,c=0;
      cin>>n;
      int no=n;
      while(n>0)
      {
         int rem=n%10; 
         if(rem!=0)
         {
            if(no%rem==0){
             c++;
         }  
         }
          n=n/10;
      }
      cout<<c<<endl; 
     }
    return 0;
}
