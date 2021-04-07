#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int n;
  scanf("%d", &n);
  char arr1[n], arr2[n];
  int count=0;
  scanf("%s %s", arr1, arr2);

  for(int i=0; i<n; i++)
  {
    int high, low;
    
    if(arr1[i]>arr2[i])
    {
      high=arr2[i]+10-arr1[i];
      low=abs(arr1[i]-arr2[i]);
      if(high>low) count+=low;
      else count+=high;
    }
    //printf("%d ", count);
    else 
    {
      high=arr1[i]+10-arr2[i];
      low=abs(arr1[i]-arr2[i]);
      if(high>low) count+=low;
      else count+=high;
    }
  }
  printf("%d", count);
}
