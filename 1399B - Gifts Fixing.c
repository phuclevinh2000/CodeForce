//1399B - Gifts Fixing

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
    //input
    long long int n, mincandy=0, minorange=0, step=0;
    scanf("%lld", &n);
    int candy[1000], orange[1000];
    for(int i=0; i<n; i++)
    {
      scanf("%d", &candy[i]);
    } 
    for(int i=0; i<n; i++)
    {
      scanf("%d", &orange[i]);
    }

    //find min
    mincandy=candy[0];
    minorange=orange[0];
    for(int i=0; i<n; i++)
    {
      if(candy[i]<mincandy) mincandy=candy[i];
      if(orange[i]<minorange) minorange=orange[i];
    }

    //solve
    for(int i=0; i<n; i++)
    {
        int x=candy[i]-mincandy;
        int y=orange[i]-minorange;
        if(x>y) step+=x;
        else step+=y;
    }
   printf("%lld\n", step);
  }
}
