 //	1371A - Magical Sticks
 
 #include <bits/stdc++.h>

 using namespace std;

 int main()
 {
   int t;
   cin >> t;
   while(t--)
   {
     int n;
     cin >>n;
     if(n%2==0) cout<<n/2<<endl;
     else
     {
       int x=1+(n-1)/2;
       cout << x<< endl;
     }

   }
 }
