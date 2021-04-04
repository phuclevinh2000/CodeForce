//note: if find min of 3 or more elements, use {} 

#include <bits/stdc++.h>
 
 using namespace std;
 
 int main()
 {
  int n,k,l,c,d,p,nl,np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
 
  //solve
  int toast=(k*l)/nl, slide=c*d, salt=p/np;
  int ans=min({toast,slide,salt});
  cout << ans/n;
 }
