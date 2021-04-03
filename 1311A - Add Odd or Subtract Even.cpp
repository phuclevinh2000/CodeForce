
 
 #include <bits/stdc++.h>

 using namespace std;

 int main()
 {
   int t;
   cin >> t; 
   while(t--)
   {
     int a,b, count=0,x;
     cin >> a >> b;
     x=abs(a-b);
     if(a<b)
     {
       if(x%2==0) cout << 2 << endl;
       else cout << 1 << endl;
     }
     else if(a>b)
     {
       if(x%2==0) cout << 1 << endl;
       else cout << 2 << endl;
     }
     else 
     {
       cout << 0 << endl;
     }
   }
 }
