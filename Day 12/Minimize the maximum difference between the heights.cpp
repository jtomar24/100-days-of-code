#include <bits/stdc++.h>
using namespace std;


// User function template for C++

class Solution {
public:
//function to find the minimum possible difference between maximum and minimum elements when we have to add/subtract every number by k
	int getMinDiff(int arr[], int n, int k)
	{
		sort(arr, arr + n);//sort the array to get the corner cases ans.
		int minEle, maxEle;//these 2 variables will hold the between elements max and min value
		int result = arr[n - 1] - arr[0];//current result when arr[0] iss min and arr[n-1] is max

		for (int i = 1; i <= n - 1; i++) {
		maxEle = max(arr[i - 1] + k, arr[n - 1] - k);//
		minEle = min(arr[0] + k, arr[i] - k);

		result = min(result, maxEle - minEle);//if the middle elements max and min diffrence if less than result then update result.
		}
		return result;//return result.
	}
};

// Driver Code
int main()
{
	int t=1;
	
	while (t--) {
		int k = 6;
	int n=3;
		int arr[n]={1, 15, 10};
	
		
		Solution ob;
		auto ans = ob.getMinDiff(arr, n, k);
		cout << ans << "\n";
	}
	return 0;
}
