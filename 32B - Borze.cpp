#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	cin >> str;
	int length= str.length();
	for(int i=0; i<length; i++)
	{
		if(str[i]=='-' && str[i+1]=='-') 
		{
			cout << "2";
			i++;
		}
		else if(str[i]=='-' && str[i+1]=='.')
		{
			cout << "1";
			i++;
		}
		else cout << "0";
		//cout << endl << i;
		//if(str[length-1]=='.' && i==length-1) cout << "0";
	}
}
