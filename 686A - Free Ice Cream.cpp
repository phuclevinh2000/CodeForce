#include <bits/stdc++.h>

using namespace std;


int main()
{
	long long n,x, distress=0; //n stand for number of people come, x for intial ice cream
	cin >> n >> x;
	for(long long i=0; i<n; i++)
	{
		long long ice;
		string in;
		cin >> in;
		cin >> ice;
		if(in[0]=='+') x+=ice;
		else
		{
			if(x >= ice) x-=ice;
			else distress++;
		}
	}
	cout << x << " " << distress;
} 
 
