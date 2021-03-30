//	1348A - Phoenix and Balance

#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
      int a;
      cin >> a;
      int one, two=0, div=a/2;
      one=pow(2, a);
      
      for(int i=1; i<=a-1; i++)
      {
        if(i<div) one+=pow(2,i);
        else two+=pow(2,i);
      }
      cout << abs(two-one) << endl;
    }
    return 0;
}
