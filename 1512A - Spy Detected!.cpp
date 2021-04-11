#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, output=1;
		cin >> n;
		int arr[n],vitri, countbig=0,countsmall=0,chuyen[n],dem=0;
		for(int i=0; i<n; i++)
		{ 
			cin >> arr[i];
		}
		int lon, nho, socantim;
		
		lon=*max_element (arr, arr+n);
		nho=*min_element (arr, arr+n);
		
		
		for(int i=0; i<n; i++)
		{
			if(arr[i]==lon) countbig++;
			else countsmall++;
		}
		if(countbig>countsmall) socantim=nho;
		else socantim=lon;
		for(int i=0; i<n; i++)
		{
			if(arr[i]==socantim) output=i+1;
		}
		
		cout << output << endl;
	
	}
}
