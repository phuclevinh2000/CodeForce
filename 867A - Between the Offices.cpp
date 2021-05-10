#include <bits/stdc++.h>

using namespace std;



int main(){
    int t, s=0, f=0;
	cin >> t;
	string str;
	cin >> str;
	for(int i=0; i<t-1; i++)
	{
		if(str[i]=='S' && str[i+1]=='F') s++;
		else if(str[i]=='F' && str[i+1]=='S') f++;
	}
	//cout << f << endl;
	if(s>f) cout << "YES\n";
	else cout << "NO\n";
}
