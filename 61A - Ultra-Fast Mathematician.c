//61A - Ultra-Fast Mathematician
//so sanh 2 so thu tu, neu nhu ma 2 so khac nhau thi in 1 con giong nhau thi in 0

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char str1[110], str2[110];

  scanf("%s %s", str1, str2);

  for(int i=0;i<strlen(str1); i++)
  {
    if(str1[i]!=str2[i]) printf("1");
    else printf("0");
  }
	return 0;
}
