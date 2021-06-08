#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int a[3],b[3];
    for(int i=0;i<3;i++)
    {
     cin>>a[i];   
    }
     for(int i=0;i<3;i++)
    {
     cin>>b[i];   
    }
    int ap=0,bp=0;
   if(a[0]>b[0])
   {
      ap=ap+1 ;
   }
   if(a[0]<b[0])
   {
      bp=bp+1;
   }
   if(a[1]>b[1])
   {
      ap=ap+1 ;
   }
   if(a[1]<b[1])
   {
      bp=bp+1;
   }
   if(a[2]>b[2])
   {
      ap=ap+1; 
   }
   if(a[2]<b[2])
   {
      bp=bp+1;
   }
   cout<<ap<<" "<<bp;
   return 0;
}
