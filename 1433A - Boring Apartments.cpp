//	1433A - Boring Apartments
 
 #include <bits/stdc++.h>

 using namespace std;

 int main()
 {
   int t;
   cin >> t;
   while(t--)
   {
    int x, a, count=0;
    cin >> x;
    a=x%10; // get the last digit of x
    while(x>0)  //count how many digit does x has
    {
      count++;
      x/=10;
    }
    int sum=0;
    if(count==1) sum=1;
    else if(count==2) sum=3;
    else if(count==3) sum=6;
    else if(count==4) sum=10;
    
    //output
    x=10*(a-1)+sum;
    cout << x << endl;
   }
 }
