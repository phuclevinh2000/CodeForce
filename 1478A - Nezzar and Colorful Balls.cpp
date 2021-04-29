#include <bits/stdc++.h>

using namespace std;

//dem so lan lap lai cua 1 chu so, lay so lan lap lai cao nhat la dap an
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, in, max=1;
		cin >> n;
		int arr[n+1]={0};
		for(int i=1; i<=n; i++)
		{
			cin >> in;
			arr[in]++;
		}
		for(int i=1; i<=n; i++)
		{
			if(arr[i]>=max) max=arr[i];
		}
		cout << max << endl;
	}
} 
 
