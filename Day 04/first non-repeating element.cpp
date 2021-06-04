// Efficient CPP program to find first non-repeating element.
#include <bits/stdc++.h>
using namespace std;

int firstNonRepeating(int arr[], int n)
{
	// Insert all array elements in hash table
	unordered_map<int, int> mp;
	for (int i = 0; i < n; i++)
		mp[arr[i]]++;

	// Traverse array again and return first element with count 1.
	for (int i = 0; i < n; i++)
		if (mp[arr[i]] == 1)
			return arr[i];
	return -1;
}


int main()
{
	int arr[] = { 9, 4, 9, 6, 7, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << firstNonRepeating(arr, n);
	return 0;
}
