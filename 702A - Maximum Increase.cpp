#include <bits/stdc++.h>

using namespace std;

int main()
{
	//input variables
	int n, count=1, max=1;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++) cin >> arr[i];

	//solve the problem
	for(int i=0; i<n-1; i++)
	{
		if(arr[i]<arr[i+1]) count++;
		else count=1;
		if(count > max) max=count;
	}
	
	cout << max;
}
