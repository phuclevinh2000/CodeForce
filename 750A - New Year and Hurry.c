//750A - New Year and Hurry.c//	

#include <stdio.h>
#include <string.h>

int main(void)
{
  //4 hours is 240 mins
  int n,k, time;
  scanf("%d %d", &n, &k);

  //time left for moving
  time=240-k;
  int count=1, sum=0, status=0;
  while(sum<=time)
  {
    sum+=(5*count); 
    count++;
  }
  if(count-2>=n) printf("%d", n);
  else printf("%d ", count-2);
}
