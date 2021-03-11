//59A - Word
//count the number of uppercase and lowercase, if uppercase > lowercase then change every lowercase into uppercase and opposite
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void uplow(char *str)
{
  int countlow=0, countup=0;
  for(int i=0;i<strlen(str);i++)
  {
    if(str[i]>=65 && str[i]<=90) countup++;
    else countlow++;
  }
  if(countup>countlow)
  {
    for(int i=0;i<strlen(str); i++)
    {
      if(str[i]>=97 && str[i]<=122) str[i]-=32;
    }
  }
  else 
  {
    for(int i=0;i<strlen(str); i++)
    {
      if(str[i]>=65 && str[i]<=90) str[i]+=32;
    }
  }
  printf("%s",str);
}

int main(void)
{
  char str[110];
  scanf("%s", str);
  uplow(str);
	return 0;
}
