//	1360A - Minimal Square

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
  int t;
  scanf("%d", &t);
  while(t--)
  {
    int a,b,min=0,max=0;
    scanf("%d %d", &a, &b);
    int status1;

    if(a>=b) 
    {
      max=a;
      min=b;
      status1=min*2;
      //printf("%d", status2);
      if(status1>=max) printf("%d\n", status1*status1);
      else printf("%d\n", max*max);

    }
    else 
    {
      max=b;
      min=a;
      status1=min*2;
      if(status1>=max) printf("%d\n", status1*status1);
      else printf("%d\n", max*max);
    }

    
  }
}
