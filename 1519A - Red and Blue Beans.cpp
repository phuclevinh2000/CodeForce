#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
	cin>>t;
    while(t--)
	{
    	//input 
        double a,b,c;
        cin >> a >> b >> c;
        double big, small;
        
        //solve
        small=min(a,b);
        big=max(a,b);
        if(big/small-1<=c) cout << "YES\n";
        else cout << "NO\n";
    }
}
