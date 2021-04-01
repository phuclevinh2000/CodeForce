 //		509A - Maximum in Table
 
 #include <bits/stdc++.h>

 using namespace std;

 int main()
 {
  int n;
  cin >> n ;
  int arr[11][11];
  for(int i=1; i<=n; i++)
  {
    arr[1][i]=1;
    arr[i][1]=1;
  }

  for(int i=2; i<=n; i++)
  {
    for(int j=2; j<=n; j++)
    {
      arr[i][j]=arr[i-1][j]+arr[i][j-1];
    }
  }
  cout << arr[n][n];
 }
