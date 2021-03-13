//1296A - Array with Odd Sum
//Calculate if the sum of each case can be seperate into odd numbers:
//If there is no odd number, then no matter how to move it will stay all even, so it’s NO.
//If there is odd number and even number, then it can be YES because it can make the number of odds an odd number.
//If there is only odd number, checkout for the total number n, if n is a odd number, then it’s YES; If n is an even number, then it’s NO.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int testcase;
  scanf("%d", &testcase);

  while(testcase--)
  {
    int a,b,even=0,odd=0;
    scanf("%d",&a);
    for(int i=0; i<a; i++)
    {
      scanf("%d", &b);
      if(b%2==0) even++;
      else odd++;
    }
    if (odd==0 || (even==0 && a%2==0))
    {
      printf("NO\n");
    }
    else 
    {
      printf("YES\n");
    }
  }
	return 0;
}
