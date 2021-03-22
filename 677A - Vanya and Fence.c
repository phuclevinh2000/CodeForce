
//677A - Vanya and Fence	

#include <stdio.h>
#include <string.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//a*b
int main()
{
  int n,h,sum=0;
  scanf("%d %d", &n, &h);

  int a[n];
  for(int i=0; i<n; i++)
  {
    scanf("%d", &a[i]);
    if(a[i]>h) sum+=2;
    else sum+=1;
  }
  printf("%d", sum);
}
