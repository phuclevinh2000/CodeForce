
 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main(void)
{
  int n,m;
  scanf("%d %d", &n, &m);
  float prices[n], kilo[n];
  double output;
  for(int i=0; i<n; i++)
  {
    scanf("%f %f", &prices[i], &kilo[i]);
  }
  output=m*prices[0]/kilo[0];
  for(int i=0; i<n; i++)
  {
    if(output>(m*prices[i]/kilo[i]))
    output=m*prices[i]/kilo[i];
  }
  printf("%.8f", output);
}
