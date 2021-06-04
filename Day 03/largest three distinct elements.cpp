/*Find the largest three distinct elements in an array

Given an array with all distinct elements, find the largest three elements. Expected time complexity is O(n) and extra space is O(1). 

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[] = {10, 4, 3, 50, 23, 90};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	cout<<arr[n-1]<<" "<<arr[n-2]<<" "<<arr[n-3];
    return 0;
}


//---------------------------------------------------------------------
// C++ program for find the largest
// three elements in an array
#include <bits/stdc++.h>
using namespace std;

// Function to print three largest elements
void print3largest(int arr[], int arr_size)
{
	int first, second, third;

	// There should be atleast three elements
	if (arr_size < 3)
	{
		cout << " Invalid Input ";
		return;
	}

	third = first = second = INT_MIN;
	for(int i = 0; i < arr_size; i++)
	{
		
		// If current element is
		// greater than first
		if (arr[i] > first)
		{
			third = second;
			second = first;
			first = arr[i];
		}

		// If arr[i] is in between first
		// and second then update second
		else if (arr[i] > second)
		{
			third = second;
			second = arr[i];
		}

		else if (arr[i] > third)
			third = arr[i];
	}

	cout << "Three largest elements are "
		<< first << " " << second << " "
		<< third << endl;
}

// Driver code
int main()
{
	int arr[] = { 12, 13, 1, 10, 34, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	print3largest(arr, n);
	return 0;
}

// This code is contributed by Anjali_Chauhan
