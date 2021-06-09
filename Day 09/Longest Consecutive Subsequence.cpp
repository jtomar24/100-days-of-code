#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {1, 9, 3, 10, 4, 20, 2};
    int count=1,maxc=0;
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
	for(int i=0;i<n;i++)
	{   
	    if((a[i+1]-a[i])==1)
	    {
	        count++;
	    }
	    else{
	        count=0;
	    }
	    if(count>maxc)
	    {
	        maxc=count;
	    }
	}
	cout<<maxc;
	return 0;
}
