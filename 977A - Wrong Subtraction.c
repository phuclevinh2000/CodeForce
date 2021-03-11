//977A - Wrong Subtraction
//if the last digit%10==0 then /=10
//else -1
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,k;
	scanf("%d %d", &n, &k);
	
  while(k--)
  {
    if (n%10!=0) n--;
    else n/=10;
  }

  printf("%d",n);
	return 0;
}
