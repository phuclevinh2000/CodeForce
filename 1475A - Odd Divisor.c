//1475A - Odd Divisor
//do moi so nguyen to tru 2 deu co odd divisor, nen neu nhu tach ra thua so nguyen to ma bang 2^i thi no la even,con lai la odd
#include <stdio.h>
#include <math.h>
void solve(long long int n)
{
  for(int i=0;i<64;i++)
  {
    if(pow(2,i)==n)
    {
      printf("NO\n");
      return;
    }
  }
  printf("YES\n");
}

int main(void) {
  int t;
  scanf("%d",&t);
  while(t--)
  {
    long long int n;
    scanf("%lld",&n);
    solve(n);
  }
}
