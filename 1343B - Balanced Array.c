

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int n,sum=0,a=2,b=1;
    scanf("%d", &n);
    //neu ko chia het cho 4 thi NO
    if(n%4!=0) printf("NO\n");
    else 
    {
      printf("YES\n");
      //in so chan n/2 lan
      for(int i=0;i<n/2;i++)
      {
        sum+=a;
        printf("%d ",a);
        a+=2;
      }
      //in so le n/2-1 lan
      for(int i=0;i<(n/2)-1;i++)
      {
        sum-=b;
        printf("%d ",b);
        b+=2;
      }
      //chu so cuoi cung
       printf("%d\n",sum);
    }
  }

}
