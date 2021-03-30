#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int x=n/2;

  //neu no la so chan chi chi in toan bo la so 2
  cout<<x<<endl;
  if(n%2==0)
  {
    for(int i=0; i<x; i++)
    {
      cout << 2 << " ";
    }
  }
  //neu no la so le thi tach no ra toan bo la so 2 roi them 1 so 3 o lan cuoi cung la du
  if(n%2==1)
  {
    for(int i=0; i<x-1; i++)
    {
      cout << 2 << " ";
    }
    cout<<3;
  }

  
}
