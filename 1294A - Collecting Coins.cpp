
 
 #include <bits/stdc++.h>

 using namespace std;

 int main()
 {
   int t;
   cin >> t;
   while(t--)
   {
    int arr[4];
    for(int i=0; i<4; i++) cin >> arr[i];
    sort(arr, arr + 3, greater<int>()); //soft indecending order
    int a,b,c;
    a=arr[0]-arr[1];
    b=arr[0]-arr[2];
    c=arr[3]-a-b;
    if(c>=0 && c%3==0) cout << "YES\n";
    else cout << "NO\n";
   }
 }
