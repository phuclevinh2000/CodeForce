//	1374A - Required Remainder
#include <stdio.h>
#include <string.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
  int t;
  scanf("%d", &t);
  while(t--)
  {
    int x,y,n, div, ans;
    scanf("%d %d %d", &x, &y, &n);
    div=n/x;  //find the division
    ans=x*div+y;    //calculate the highest number again
    if(ans>n)
    {
      ans-=x;
    }
    printf("%d\n", ans);
  }
}
