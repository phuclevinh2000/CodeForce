#include <bits/stdc++.h>

using namespace std;



int main(){
    int t;
	cin>>t;
    while(t--)
	{
    	string str;
    	int arr[26]={0}, len, status=0;
    	cin >> len;
    	cin >> str;
    	for(int i=0; i<len; i++)	//check if ocure of the number
    	{
    		if(str[i]!=str[i+1]) 
    		{
    			arr[str[i]-65]++;
			}
		}
		
		for(int i=0; i<26; i++) 
		{
			if(arr[i]>1) 
			{
				status=1;
				break;
			}
		}
		
		if(status==0) cout << "YES\n";
		else cout << "NO\n";
		//cout << -1 << endl;
    }
}
