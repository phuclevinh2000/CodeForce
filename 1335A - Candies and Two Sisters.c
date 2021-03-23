//	1335A - Candies and Two Sisters

#include <stdio.h>
#include <string.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--)
  {
    int n;
    scanf("%d", &n);
    if(n%2==1) printf("%d\n", n/2);
    else printf("%d\n", (n/2)-1);
  }
}
