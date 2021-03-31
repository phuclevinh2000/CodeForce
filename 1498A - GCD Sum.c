#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int gcdsum(unsigned long long x, unsigned long long sumnum)
{
 
  unsigned long long int i, gcd;
  for(i=1; i <= x && i <= sumnum; ++i)
    {
        // Checks if i is factor of both integers
        if(x%i==0 && sumnum%i==0)
            gcd = i;
    }
    return gcd;
}
 
int main(void)
{
  int t;
  scanf("%d", &t);
  while(t--)
  {
    unsigned long long x=0, sumnum=0, a,i,gcd=0,z;
    scanf("%lld", &x);
 
    //cal the sumnum
   
    
    while(gcd<=1)
    {
      a=x;
      sumnum=0;
      while(a>0)
      {
        sumnum=sumnum+a%10;
        a/=10;
      }
       gcd=gcdsum(x, sumnum);
       x++;
     }
    
    printf("%lld\n", x-1);
  }
}
