
 
 #include <bits/stdc++.h>

 using namespace std;

 int main()
 {
    int w,y;
    cin >> y >> w;
    int x=max(y,w);

    x=6-x+1;
    string output[7]={"","1/6","1/3","1/2","2/3","5/6","1/1"};

    cout << output[x];
 }
