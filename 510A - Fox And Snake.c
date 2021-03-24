//510A - Fox And Snake

#include <stdio.h>
#include <string.h>

int main(void)
{
  int n,m;
  scanf("%d %d", &n, &m);
  for(int i=1; i<n+1; i++)
  {
    //print #####
    if(i%2==1)
    {
      for(int j=0; j<m; j++)  printf("#");
      printf("\n");
    }
    //print #.....
    if(i%4==0)
    {
      printf("#");
      for(int j=0; j<m-1; j++)  printf(".");
      printf("\n");
    }
    //print ......#
    if(i%4!=0 && i%2==0)
    {
      for(int j=0; j<m-1; j++)  printf(".");
      printf("#\n");
    }
  }
}
