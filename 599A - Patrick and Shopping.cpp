#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	int road=min(a,b);
	int sumhousepath=min(a+b,c);
	road+=sumhousepath;
	road+=min(max(a,b),c+min(a,b));
	cout << road;
} 
 
