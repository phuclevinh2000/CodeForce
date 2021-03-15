//	1501B - Napoleon Cake
//vd nhu   0 3 0 0 1 3
//se thanh 1 1 0 1 1 1
//day so ki tu xuong theo thu tu tu trai sang phai

#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
 
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
 
const int N=2e5+5;
 
int T,n;
int a[N],c[N];
 
int main()
{
//	freopen("1.in","r",stdin);
	int i;
	
	scanf("%d",&T);
	while(T--) {
		scanf("%d",&n);
		for(i=0;i<=n;i++) c[i]=0;
		for(i=1;i<=n;i++) scanf("%d",&a[i]);
		for(i=1;i<=n;i++) c[max(i-a[i]+1,1)]++,c[i+1]--;
		for(i=1;i<=n;i++) c[i]+=c[i-1];
		for(i=1;i<=n;i++) printf("%d ",(c[i]>0));
		puts("");
	}
	return 0;
}
