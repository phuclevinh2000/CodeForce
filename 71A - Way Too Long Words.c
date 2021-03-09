#include <stdio.h>
#include <string.h>
void toolong(char name[]);

int main(void) {
  int count=0, numcase;
  scanf("%d", &numcase);
  while(numcase!=0)
  {
    char name[200];
    scanf("%s", name);
    toolong(name);
    numcase--;
  }
}

void toolong(char name[])
{
  int a;
  a=strlen(name);
  if(a<=10) printf("%s\n", name);
  else printf("%c%d%c\n", name[0], a-2,name[a-1]);
  //printf("%d", a);
}
