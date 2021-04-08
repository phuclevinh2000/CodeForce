
 
 #include <bits/stdc++.h>

 using namespace std;

 int main()
 {
    int t;
    cin >> t;
    while(t--)
    {
      int n,d,sum=0, status=0;
      cin >> n >>d;
      int arr[n];
      for(int i=0; i<n; i++)
      {
        cin >> arr[i];
        if(arr[i]>d) status=1;
      }
      if(status==0) 
      {
        cout << "YES\n";
        continue;
      }
      sort(arr, arr+n);
      sum=arr[0]+arr[1];
      
      if(sum>d) cout << "NO\n";
      else cout << "YES\n";
    }
 }
