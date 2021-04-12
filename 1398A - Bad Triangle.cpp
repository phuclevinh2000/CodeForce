#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,status=0,i;
		cin >> n;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin >> arr[i];
		}
		
		if(arr[0]+arr[1]>arr[n-1])	cout<< "-1\n";
		else cout << 1 << " " << 2 << " " << n << endl;
	}
}
