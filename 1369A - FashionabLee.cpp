//the solution will be YES if it is divined by 4
 
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
    if(a%4==0) cout << "YES\n";
    else cout << "NO\n";
   }
 }
