

#include <stdio.h>
#include <string.h>

int main(void)
{
  int n, count=0, sum=0;
  scanf("%d", &n);

  while(sum<=n)
    {
      sum+=100;
      count++;
    }
    sum-=100;
    count--;
    
  while(sum<=n)
    {
      sum+=20;
      count++;
    }
    sum-=20;
    count--;
  
  while(sum<=n)
    {
      sum+=10;
      count++;
    }
    sum-=10;
    count--;

  while(sum<=n)
    {
      sum+=5;
      count++;
    }
    sum-=5;
    count--;

  while(sum<=n)
    {
      sum++;
      count++;
    }
    sum--;
    count--;
    printf("%d", count);
}
