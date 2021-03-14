//96A - Football
//count if there are equal or more than 7 same type of char next to each other

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char a[100];
  int count=1;

  scanf("%s", a);
  for(int i=0; i<strlen(a); i++)
  {
    if(a[i]==a[i+1]) count++;
    else count=1;
    if(count>=7) break;
  }

  if(count>=7) printf("YES");
  else printf("NO");
	return 0;
}
