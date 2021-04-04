
 
 #include <bits/stdc++.h>

 using namespace std;

 int main()
 {
   int t;
   cin >> t;
   while(t--)
   {
    int arr[3];
    for(int i=0; i<3; i++) cin >> arr[i];
    sort(arr, arr + 3, greater<int>()); //soft indecending order
    if(arr[0]!=arr[1]) cout << "NO\n";
    else cout << "YES\n" << arr[0] << " " << arr[2] << " " << arr[2] << endl;; //because the biggest number of a,b,c will be repeat 2 times
   }
 }
