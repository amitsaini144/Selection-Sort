#include<bits/stdc++.h>
using namespace std;

// O(N^2) --> best, average, worst case time complexity

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i) cin >> arr[i];
			for (int i = 0; i <= n-2; ++i)
			{
				int mini = i;
				for (int j = i; j <= n-1; ++j){
					if(arr[j] < arr[mini]) mini = j;
				}
				swap(arr[i], arr[mini]);
			}
			for (int i = 0; i < n; ++i) cout << arr[i] << ' ';
				cout << endl;
	}
	return 0;
}