/* In this task, we will set 2,3,5,7 as the first 4 prime, by this, we can make a set
of 2*3=6, 2*5=10, 2*7=14, then the last number will be independent var*/ 
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int var=6+10+14;
		int n;
		cin >> n;
		if(n<=var) cout << "NO\n";
		else 
		{
			int out=n-var;
			cout << "YES\n";
			if(out!=6 && out!=10 && out!=14)
			cout << "6 10 14 " << out << endl;
			else cout << "6 10 15 " << out-1 << endl;
		}
	}
}
