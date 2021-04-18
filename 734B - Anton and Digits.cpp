#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int minimum=min(min(a,c),d); //find min of number of 2,5,6
	int output=minimum*256;
	a-=minimum;
	output+=(min(a,b)*32);		//add the remain number of a and b, find min, thats the number of 32 we have
	cout << output;
} 
 
