//112A - Petya and Strings
//compare two string using strcmp

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(void)
{
  char str1[110], str2[110];
  int sum1=0,sum2=0;
  scanf("%s %s",str1,str2);
  for(int i=0; i<strlen(str1);i++)
  {
    if(str1[i]>=65 && str1[i]<=90) str1[i]+=32;
    if(str2[i]>=65 && str2[i]<=90) str2[i]+=32;
  }

  int out=strcmp(str1, str2);

  if(out<0) printf("-1");
  else if(out>0) printf("1");
  else printf("0");
	return 0;
}
