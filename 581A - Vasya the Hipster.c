//	581A - Vasya the Hipster

#include <stdio.h>
#include <string.h>

int main(void)
{
  int a,b, big, small, count=0;
  scanf("%d %d", &a, &b);
  if(a>b)
  {
    big=a;
    small=b;
  }
  else
  {
    big=b;
    small=a;
  }
  count=small;
  printf("%d ", count);
  //a now is the sock he has left 
  a=big-small;
  if(a>1)
  {
    a/=2;
    printf("%d", a);
  }
  else printf("0");
}
