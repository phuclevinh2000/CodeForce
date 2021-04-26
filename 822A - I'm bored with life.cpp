#include <bits/stdc++.h>

using namespace std;


int main()
{
	int a,b;
	cin >> a >> b;
	int small=min(a,b), value=1;
	
	//solve
	//because factorial number of bigger number will include that small number
	//ex: 4!= 3!*4,...
	for(int i=1; i<=small; i++)
	{
		value*=i;
	}
	cout << value;
} 
 
