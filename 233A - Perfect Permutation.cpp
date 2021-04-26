#include <bits/stdc++.h>

using namespace std;


int main()
{
	int n;
	cin >> n;
	if(n%2==1) cout << -1;
	else 
	{
		int arr[n]={0}, count=1;
		for(int i=1; i<=n/2; i++)
		{
			cout << count+1 << " " << count << " ";
			count+=2;
		}
	}
} 
 
