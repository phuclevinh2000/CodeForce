#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for(int i=0; i<n; i++) cin >> arr[i];
		
		//solve
		int chan=0, le=0;
		for(int i=0; i<n; i++)
		{
			if(i%2==0 && arr[i]%2==1) le++;
			else if(i%2==1 && arr[i]%2==0) chan++;
		}
		if(chan==le) cout << chan << endl;
		else cout << -1 << endl;
	}
} 
 
