#include <bits/stdc++.h>

using namespace std;

//dem so chu n,o,e
int main()
{
	int a,z=0,e=0,r=0,o=0,n=0, one, zero;
	cin >> a;
 	char str[a];
 	for(int i=0; i<a; i++)
 	{
 		cin >> str[i];
 		if(str[i]=='z') z++;
 		else if(str[i]=='e') e++;
 		else if(str[i]=='r') r++;
 		else if(str[i]=='o') o++;
 		else n++;
	}
	one=min(min(o,n),e);
	o-=one;
	n-=one;
	e-=one;
	zero=min(min(min(z,e),r),o);
	for(int i=0; i<one; i++) cout << "1 ";
	for(int i=0; i<zero; i++) cout << "0 ";
 	//cout << z << " " << e << " " << r << " " << o << " " << n;
} 
 
