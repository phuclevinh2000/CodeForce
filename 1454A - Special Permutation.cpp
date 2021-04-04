
 
 #include <bits/stdc++.h>

 using namespace std;

 int main()
 {
   int t;
   cin >> t;
   while(t--)
   {
    int n, i, arr[100];
    cin >> n;
    for(i=0; i<n; i++)
    {
      arr[i]=i;
    }
    if(n%2==0)    //neu so chan thi doi vi tri thu i cho vi tri thu i-1
    {
      for(i=1; i<n; i+=2)
      {
        swap(arr[i], arr[i-1]);
      }
    }
    else if(n%2==1) //neu so le thi doi vi tri thu i cho vi tri thu i-1, con 3 so cuoi thi doi cho cho nhau
    {
      for(i=1; i<n-3; i+=2)
      {
        swap(arr[i], arr[i-1]);
      }
      swap(arr[n-1], arr[n-3]);
      swap(arr[n-2], arr[n-1]);
    }
    for(i=0; i<n; i++)
    {
      cout <<arr[i]+1<< " ";
    }
    cout << endl;
   }
 }
