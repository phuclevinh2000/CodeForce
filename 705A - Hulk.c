


#include <stdio.h>
#include <string.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
  int n, count=0;
  scanf("%d", &n);

  for(int i=1;i<=n-1; i++)  //chay tu 1 toi n-1
  {
    if(i%2==1) printf("I hate that ");
    else printf("I love that ");
  }
  if(n%2==0) printf("I love it"); //truong hop cuoi
  else printf("I hate it");
}
