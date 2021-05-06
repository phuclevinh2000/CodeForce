#include <bits/stdc++.h>
//a*n+b*n=y-x
using namespace std;

int main(){
    int t;
	cin>>t;
    while(t--)
	{
    	int x,y,a,b, hieu, tong;
    	cin >> x >> y >> a >> b;
    	hieu=y-x;
    	tong=a+b;
    	if(hieu%tong!=0) cout << "-1" << endl;
    	else 
    	{
    		cout << hieu/tong << endl;
		}
		//cout << -1 << endl;
    }
}
