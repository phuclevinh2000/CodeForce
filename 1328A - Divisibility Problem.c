
#include <stdio.h>
int main(){
	int t,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
		if(a%b==0)printf("0\n");
		else printf("%d\n",b-a%b);
	}
	return 0;
}
