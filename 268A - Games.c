//	268A - Games
#include <stdio.h>
int main(){
	int t,a[100],b[100], count=0;
	scanf("%d",&t);
	
  for(int i=0; i<t; i++)
  {
    scanf("%d %d", &a[i], &b[i]);
  }
  for(int i=0; i<t; i++)    //xet 1 day a va 1 day b, voi tung a thi chay nguyen day b, neu giong thi count++
  {
    for(int j=0; j<t; j++)
    {
      if(a[i]==b[j]) count++;
    }
  }
  printf("%d", count);
	return 0;
}
