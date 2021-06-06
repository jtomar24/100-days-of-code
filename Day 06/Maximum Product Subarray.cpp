// C++ program to find Maximum Product Subarray
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 1, -2, -3, 0, 7, -8, -2 };
	int n = sizeof(arr) / sizeof(arr[0]);
  int result = arr[0];

	for (int i = 0; i < n; i++)
	{
		int mul = arr[i];
		for (int j = i + 1; j < n; j++)
		{
			result = max(result, mul);
			mul *= arr[j];
		}
			result = max(result, mul);
  }
	cout << "Maximum Sub array product is "<< result;
	return 0;
}


