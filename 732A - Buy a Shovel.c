

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
  int k, r;
  scanf("%d %d", &k, &r);
  int x=k, count=1;
  while(x%10!=0 && x%10!=r) //xet chu so cuoi cung 
  {
    count++;
    x+=k;
  }
  printf("%d", count);
}
