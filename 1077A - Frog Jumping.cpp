#include <bits/stdc++.h>

using namespace std;


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long a,b,k, left, right, out;
		cin >> a >> b >> k;
		if(k%2==0) out=-(k/2)*b+(k/2)*a;
		else 
		{
			right=(k/2)*b;
			left=(k/2+1)*a;
			out=-right+left;
		}
		cout << out << endl;
	}
} 
 
