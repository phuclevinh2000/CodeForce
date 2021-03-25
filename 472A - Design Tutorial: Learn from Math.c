//	

#include <stdio.h>
#include <string.h>
int checkprime(int n)
{
    int i, flag=0;
    for (i = 2; i <= n / 2; ++i) {
    // condition for non-prime
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }
  return flag;
}
int main(void)
{
  int t, a=4,b=0; //4 is the first composite number
  scanf("%d", &t);

    while(checkprime(a)!=1 || checkprime(t-a)!=1)
    {
      a++;
    }
    printf("%d %d", a, t-a);
  
}
