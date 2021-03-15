//282A - Bit++
//using strcmp to compare two string

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{
  
  int t,sum=0;
  scanf("%d",&t);

  while(t--)
  {
    char str[10];
    scanf("%s",str);
    if(strcmp(str, "++X") == 0 || strcmp(str, "X++")==0)
    {
      sum++;
    }
    else sum--;
  }
  printf("%d",sum);
	return 0;
}
