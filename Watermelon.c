#include <stdio.h>
//4A
int main(void) {
  int watermelon;
  scanf("%d", &watermelon);
  if(watermelon%2==0 && watermelon!=2) printf("YES");
  else printf("NO");
  return 0;
}