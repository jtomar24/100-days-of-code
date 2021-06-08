#include <bits/stdc++.h>

using namespace std;
#include<stdio.h>
int main()
{
int n=0,p=0,min;
cin>>n;
cin>>p;
min=(n/2)-(p/2);
if(min>p/2){
    min=p/2;
}

cout<<min;
return 0;
}
