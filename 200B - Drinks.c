//200B - Drinks
//Note to the first sample: let's assume that Vasya takes x milliliters of each drink from the fridge. Then the volume of pure juice in the cocktail will equal  milliliters. The total cocktail's volume equals 3·x milliliters, so the volume fraction of the juice in the cocktail equals , that is, 66.(6) percent.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int numcase;
  float sum=0,x,result;
  scanf("%d", &numcase);
  x=numcase;

  while(numcase--)
  {
    int orange;
    scanf("%d", &orange);
    sum+=orange;
  }

  sum/=100;
  result=sum/x;

  printf("%f",result*100);
	return 0;
}
