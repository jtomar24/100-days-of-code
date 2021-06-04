/*Find common elements in three sorted arrays

Given three arrays sorted in non-decreasing order, print all common elements in these arrays.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int ar1[] = {1, 5, 10, 20, 40, 80}; 
   int ar2[] = {6, 7, 20, 80, 100}; 
   int ar3[] = {3, 4, 15, 20, 30, 70, 80, 120}; 
   int n1=sizeof(ar1)/sizeof(ar1[0]);
   int n2=sizeof(ar2)/sizeof(ar2[0]);
   int n3=sizeof(ar3)/sizeof(ar3[0]);
   
   for(int i=0;i<n1;i++)
   {
       for(int j=0;j<n2;j++)
       {   
           if(ar1[i]==ar2[j])
           {
             for(int k=0;k<n3;k++)
             {
               if(ar1[i]==ar3[k])
               {
                   cout<<ar1[i]<<" ";
               }
             } 
           }
          
       }
   }
    return 0;
}
