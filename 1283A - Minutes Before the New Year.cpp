
 
 #include <bits/stdc++.h>

 using namespace std;

 int main()
 {
  int t;
  cin >> t;
  while(t--)
  {
    int h,m, out=0;
    cin >> h >> m;
    out+=(60-m);  
    h++;
    out+=(24-h)*60;
    cout << out << endl;
  }
 }
