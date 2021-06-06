#include <bits/stdc++.h>
#include<map>
using namespace std;
int a[1004];
int main() {
	map<int,int> m;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
	    m[a[i]]++;
	}
	map<int,int>::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
	    cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}
