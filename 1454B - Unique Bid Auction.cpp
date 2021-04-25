#include <bits/stdc++.h>

using namespace std;


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,x;
		cin >> n;
		int index[n+1]= {0}, value[n+1]= {0};
		for(int i=0; i<n; i++)
		{
			cin >> x;
			value[x]++;		//count the number of time that var appear
			index[x]=i+1;	//location of that var
		}
		
		int ans=-1;
		for(int i=0; i<=n; i++)
		{
			if(value[i]==1) //if that variable is unique
			{
				ans=index[i];
				break;
			}
		}
		
		cout << ans << endl;
	}
} 
 
