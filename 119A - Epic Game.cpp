#include <bits/stdc++.h>

using namespace std;
int gcd(int n1, int n2)
{
	while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    return n1;
}

int main()
{
	int a,b,n;
	cin >> a >> b >>n;
	int status=0;
	while(n>0)
	{
		if(status%2==0)
		{
			n-=gcd(n,a);
		}
		else n-=gcd(n,b);
		status++;
	}
	if(status%2==0) cout << 1;
	else cout << 0;
}
