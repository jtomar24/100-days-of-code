/*Find if there is a subarray with 0 sum*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,flag=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	unordered_set<int> sumset;
	int sum=0;
	for(int i=0;i<n;i++)
	{
	  sum +=arr[i];
	  if(sum==0 || sumset.find(sum)!=sumset.end())
	  {   
	      flag=1;
	      
	      break;
	  }
	  sumset.insert(sum);
	  
	}
	if(flag=1)
	{
	    cout << "Found a subarray with 0 sum";
	}
	else
	{
	    cout << "No Such Sub Array Exists!";
	}

	return 0;
}
