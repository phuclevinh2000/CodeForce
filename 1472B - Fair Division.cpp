
 
 #include <bits/stdc++.h>

 using namespace std;

 int main()
 {
  int t;
  cin >> t;
  while(t--)
  {
    int n, one=0,two=0, status=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
      cin >> arr[i];
      if(arr[i]==1) one++;
      else two++;
    }
    if(two%2==0 && one%2==0) status=1;
    else
    {
      one-=2;
      if(one>=0 && one%2==0) status=1;
    }
    if(status==1) cout << "YES\n";
    else cout << "NO\n";
  }
 }
