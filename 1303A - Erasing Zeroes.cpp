#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        string str;
        cin >> str;
        int length=str.length(), start=0, end=0, count=0;
        for(int i=0; i<length; i++)
        {
        	if(str[i]=='1') 
        	{
        		start=i;
        		break;
			}
		}
		for(int i=length; i>=start; i--)
        {
        	if(str[i]=='1') 
        	{
        		end=i;
        		break;
			}
		}

		for(int i=start; i<end; i++)
		{
			if(str[i]=='0') count++;
		}
		cout << count << endl;

    }
}
