//	tim so cot vs so dong tuong ung cua o 1 sau do dung thong so do de tinh gia tri cua o 2

#include <stdio.h>
#include <string.h>

int main(void)
{
  int t;
  scanf("%d", &t);
  while(t--)
  {
    long long int sum=0, n,m,x, col=0, row=0;
    scanf("%lld %lld %lld", &n,&m,&x);
    row=(x+n-1)/n;
    col=0;
    if(x%n==0) col=n;
    else col=x%n;
    printf("%lld\n", m*(col-1)+row);
  }
}
