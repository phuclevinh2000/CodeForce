
 
 #include <bits/stdc++.h>

 using namespace std;

 int main()
 {
   //input
   int a,b,c,d, sum=0;
   cin >> a >> b >> c >> d;
   string str;
   cin >> str;
   int length=str.length();
   
   for(int i=0; i< length; i++)
   {
     if(str[i]=='1') sum+=a;
     else if(str[i]=='2') sum+=b;
     else if(str[i]=='3') sum+=c;
     else sum+=d;
   }
   cout << sum;
 }
