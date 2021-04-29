#include <bits/stdc++.h>

using namespace std;

//using brute forces to sort all the possible case
int main()
{
	int count=0;
	string str;
	cin >> str;
	for(int i=0; i<str.length(); i++)
	{
		for(int j=i; j<str.length(); j++)
		{
			for(int k=j; k<str.length(); k++)
			{
				if(str[i]=='Q' && str[j]=='A' && str[k]=='Q') count++;
			}
		}
	}
	cout << count << endl;
} 
 
