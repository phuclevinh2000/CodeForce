 // 707A - Brain's Photos
 
 #include <bits/stdc++.h>

 using namespace std;

 int main()
 {
  int n,m, status=0;
  cin >>n >> m;
  n*=m; //set n as n*m
  for(int i=0; i<n; i++)
  {
    char str[10];
    cin >> str;
    if(str[0]=='W' || str[0]=='G' || str[0]=='B')
    {
      continue;
    }
    else 
    {
      status=1;
      break;
    }
  }
  if(status==1) cout<<"#Color";
  else cout <<"#Black&White";
 }
