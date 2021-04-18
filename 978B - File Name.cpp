#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, state=0, count=0;
	string str;
	cin >> n >> str;
	for(int i=0; i<n; i++)
	{
		if(str[i]=='x') state++;
		else state=0;
		if(state>=3)	count++;
	}
	cout << count ;
} 
 
