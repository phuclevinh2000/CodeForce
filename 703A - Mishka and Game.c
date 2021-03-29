//		703A - Mishka and Game

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
  int t, win=0;
  scanf("%d", &t);
  while(t--)
  {
    int a,b;
    scanf("%d %d", &a, &b);
    if(a>b) win++;
    else if(a<b) win--;
  }
  if(win>0) printf("Mishka");
  else if(win==0) printf("Friendship is magic!^^");
  else printf("Chris");
}
