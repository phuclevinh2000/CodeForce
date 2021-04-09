
 
 #include <bits/stdc++.h>

 using namespace std;

 int main()
 {
    vector<long long> a(10,1);
    long long n;
    cin >> n;
    long long k=1, x=0;
    while(k<n)
    {
      long long one=a[x%10];
      k/=one;
      a[x%10]++;
      one++;
      k*=one;
      x++;
    }

    string str="codeforces";
    for(int i=0; i<10; i++)
    {
      for(int j=0; j<a[i]; j++)
      {
        cout << str[i];
      }
    }
 }
