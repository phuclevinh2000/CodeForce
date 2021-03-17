//41A - Translation
//reverse the string then compare
#include <stdio.h>
#include <string.h>
void reverseStr(char str[])
{
  int n = strlen(str);

  for (int i = 0; i < n / 2; i++)
  {
    char ch = str[i];
    str[i] = str[n - i - 1];
    str[n - i - 1] = ch;
  }
}

int main()
{
  char str[110],str2[110];
  int x;
  scanf("%s", str);
  scanf("%s", str2);
  reverseStr(str);
  x=strcmp(str2, str);
  if(x==0) printf("YES");
  else printf("NO");
  return 0;
}
