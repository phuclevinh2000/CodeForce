
 
 #include <bits/stdc++.h>

 using namespace std;

 int main()
 {
   string a, play[5];
   int status=0;
   
   //input
   cin >> a;
   for(int i=0; i<5; i++)
   {
     cin >> play[i];
   }
   for(int i=0; i<5; i++)
   {
     if(play[i][0]==a[0] || play[i][1]==a[1])
     {
       status=1;
       break;
     }
   }
   if(status==1) cout <<"YES";
   else cout << "NO";
    
 }
