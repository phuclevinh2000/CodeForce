#include <stdio.h>
 
int main() {
    int n, count=0; //number of room
  scanf("%d", &n);
  while(n--)
    {
      int p,q;
      scanf("%d %d",&p,&q);
      if((q-p)>=2) count++;
    }
  printf("%d", count);
}
