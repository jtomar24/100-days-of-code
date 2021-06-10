#include<bits/stdc++.h>
using namespace std;

int main() {
	int arr[]={3, 1, 2, 2, 1, 2, 3, 3};
	int N=8;
	int K=4;
	
	sort(arr, arr + N);

	
	for (int i = 0; i < N;) {

		
		int cnt = 1;

		
		while ((i + 1) < N
			&& arr[i] == arr[i + 1]) {

			cnt++;
            i++;
		}


		if (cnt > (N / K)) {

			cout << arr[i] << " ";
		}
		i++;
	}
	
	return 0;
}
