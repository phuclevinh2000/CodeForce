
 
 #include <bits/stdc++.h>

 using namespace std;

 int main()
 {
    int t;
    cin >> t;
    while(t--)
    {
      int r,l,a,b;
      cin >> l >> r;
      
      a=l;
      b=l*2;  //minimum posible answer

      if(b>r) cout << "-1 -1\n";
      else cout << a << " " << b << endl;
    }
 }
