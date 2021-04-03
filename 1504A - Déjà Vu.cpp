
 
 #include <bits/stdc++.h>

 using namespace std;

 int main()
 {
   int t;
   cin >> t;
   while(t--)
   {
     string str1, str2, input, re1, re2;
     cin >> input;

     str1= 'a' + input;
     str2= input + 'a';

     re1=str1;
     re2=str2;

     reverse(re1.begin(), re1.end());
     reverse(re2.begin(), re2.end());

     if(str1 != re1)
     {
       cout << "YES\n" << str1 << endl;
     }
     else if(str2 != re2)
     {
       cout << "YES\n" << str2 << endl;
     }
     else cout << "NO\n";
   }
 }
