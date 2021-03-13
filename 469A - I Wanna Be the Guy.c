//469A - I Wanna Be the Guy
//input two array, then combine two of them and run a number k=1 to the length of the combine string to find if there is any number satisfied the requirement.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n,xcase,k,i, ycase, merge[220], status=0;
  scanf("%d", &n);

  //little X and little Y input and merge two array
  scanf("%d", &xcase);
  for(i=0;i<xcase; i++)
  {
    scanf("%d", &merge[i]);
  }
  k=i;
  scanf("%d", &ycase);
  for(i=0;i<ycase; i++)
  {
    scanf("%d", &merge[k]);
    k++;
  }

  k=1;
  /*merge two array
  for(i=0; i<(xcase+ycase); i++) printf("%d\n", merge[i]);
  */

  for(i=0; i<(xcase+ycase); i++)
  {
    for(int j=0; j<(xcase+ycase); j++)
    {
      int instatus=0;
      if(merge[j]==k)
      {
        k++;
        instatus=1;
        continue;
      }
    }
  }

  if(k==(n+1)) printf("I become the guy.");
  else printf("Oh, my keyboard!");
	return 0;
}
