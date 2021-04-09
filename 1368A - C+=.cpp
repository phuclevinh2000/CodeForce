
 
 #include <bits/stdc++.h>

 using namespace std;

 int main()
 {
    int t;
    cin >> t;
    while(t--)
    {
      int a,b,n, count=0;
      cin >> a >>b >> n;
      int big, small;
      while(b<=n)
      {
        big=max(a,b);
        small=min(a,b);
        a=big;
        b=small+big;
        count++;
      }
      cout << count << endl;
    }
 }
