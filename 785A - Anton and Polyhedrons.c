//	785A - Anton and Polyhedrons

#include <stdio.h>
#include <string.h>

int main(){
  int n, sum=0;
  scanf("%d", &n);
  while(n--)
  {
    char str[20];

    scanf("%s", str);
    if(str[0]=='I') sum+=20;
    else if(str[0]=='C') sum+=6;
    else if(str[0]=='D') sum+=12;
    else if(str[0]=='T') sum+=4;
    else sum+=8;
  }
  printf("%d", sum);
}
