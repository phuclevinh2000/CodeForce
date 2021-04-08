
 
 #include <bits/stdc++.h>

 using namespace std;

 int main()
 {
    int n, status=0;
    cin >> n;
    string input[n];

    for(int i=0; i<n; i++)
    {
      cin >> input[i];
      if(input[i][0]==input[i][1] && input[i][0]=='O' && status==0)
      {
        status=1;
        input[i][0]=input[i][1]='+';
      }
      else if(input[i][3]==input[i][4] && input[i][3]=='O' && status==0)
      {
        status=1;
        input[i][3]=input[i][4]='+';
      }
    }

    if(status==1)
    {
      cout << "YES\n";
      for(int i=0;i<n; i++) cout << input[i] << endl;
    }
    else cout << "NO\n";
 }
