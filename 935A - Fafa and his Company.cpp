
 
 #include <bits/stdc++.h>

 using namespace std;

 int main()
 {
  int n;
  cin >> n;

  //solve
  int a=1, count=0, remain;
  while(a<n)
  {
    remain=n-a;
    if(remain%a==0) count++;
    a++;
  }
  cout << count;
 }
