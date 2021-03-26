

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
  int x1,x2,x3,x4, max,a,b,c;
  
  scanf("%d %d %d %d", &x1, &x2, &x3, &x4);
  if(x1>=x2 && x1>=x3 && x1>=x4) 
  {
    max=x1;
    a=max-x2;
    b=max-x3;
  }
  else if (x2>=x1 && x2>=x3 && x2>=x4) 
  {
    max=x2;
    a=max-x1;
    b=max-x3;
  }
  else if (x3>=x1 && x3>=x2 && x3>=x4) 
  {
    max=x3;
    a=max-x2;
    b=max-x1;
  }
    else
  {
    max=x4;
    a=max-x2;
    b=max-x1;
  }
  printf("%d %d %d ", a,b,max-a-b);
}
