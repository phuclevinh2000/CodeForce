#include <bits/stdc++.h>

using namespace std;

bool checkPrimeNumber(int n) {
    bool isPrime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

int main()
{
	bool flag;
	int n,m, status=0, status2;
	cin >> n >> m;
	bool flagfirst;
	
	if (checkPrimeNumber(m)) 
	{
		for(int i=n+1; i<m; i++)
		{
			if(checkPrimeNumber(i)) 
			{
				status=1;
				break;
			}
		}
	}
	
	if(status==0 && checkPrimeNumber(m)) cout << "YES\n";
	else cout << "NO\n";
} 
 
