#include <stdio.h>

int main(void) {
  int count=0, numcase;
  scanf("%d", &numcase);
  while(numcase!=0)
  {
    int a,b,c, sum=0;
    scanf("%d %d %d", &a, &b, &c);
    sum=a+b+c;
    if(sum>=2) count++;
    numcase--;
  }
  printf("%d", count);
}