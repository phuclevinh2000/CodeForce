#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  char str[100];
  scanf("%s", str);
  int length=strlen(str), character=0;
  int output=0, flag, difference;
  //solve

  flag=97;
  for(int i=0; i<length; i++)
  {
    difference=abs(flag-str[i]);
    if(difference>13)
    {
      difference=26-difference;
    }
    output+=difference;
    flag=str[i];
  }
  
  printf("%d", output);
}
