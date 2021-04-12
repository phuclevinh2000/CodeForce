#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k, status=0, check=0;
		cin >> n >> k;
		if((n-1)/2<k) cout << "-1\n";
		else 
		{
			int arr[n], bodem=n,count=1;
			for(int i=0;i<n; i++)	
			{
				arr[i]=0;
			}
			for(int i=0; i<n; i++)
			{
				if(i%2==1 && check==0) 
				{
					arr[i]=bodem;
					bodem--;
					status++;
				}
				if(i%2==0 || check==1)
				{
					arr[i]=count;
					count++;
				}
				//if(count>bodem) break;
				if(status>=k) check=1;
			}
			for(int i=0; i<n; i++)
			{
				cout << arr[i] << " ";
			}
			cout << endl;
		}
				
	}
}
