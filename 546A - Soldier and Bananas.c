//546A - Soldier and Bananas
//k dollar for the first one, 2k for the second one,..
//w is the number of bananas want to buy
//n is the money he has

#include<stdio.h>
#include <stdlib.h>

int Calculate(int k, int n, int w)
{
  int sum=0, i, j=0;
  while(j<=w)
  {
    sum=sum+(k*j);
    j++;
  }
  i=sum-n;
  if(i<0) return 0;
  else return i;
}

int main() {

	int k,n,w,print;

	scanf("%d %d %d",&k,&n,&w);
  
  print=Calculate(k,n,w);

  printf("%d", print);

}
