#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, count=1, status=0;
		cin >> n;
		string str[n], combinestr;
		combinestr[0]='\0';
		for(int i=0; i<n; i++)
		{
			cin >> str[i];
			combinestr.append(str[i]);
		}
		sort(combinestr.begin(), combinestr.end());
		int length=combinestr.length();
		for(int i=1; i<=length; i++)
		{
			if(combinestr[i]==combinestr[i-1]) count++;
			else if(combinestr[i]!=combinestr[i-1] && count%n!=0)
			{
				status=1;
				break;
			}
			else if(combinestr[i]!=combinestr[i-1] && count%n==0)
			{
				count=1;
			}
			//cout << count << status << endl ;
		}
		if(status==1) cout << "NO\n";
		else cout << "YES\n";
	}
}
