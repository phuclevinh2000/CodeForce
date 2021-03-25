//	155A - I_love_\%username\%.c
//make a count starting from 0, the count increase if in the array appear any number >max or <min

#include <stdio.h>
#include <string.h>

int main(void)
{
  int n, count=0;
  scanf("%d", &n);
  int arr[n];
  for( int i=0; i<n; i++)
  {
    scanf("%d", &arr[i]);
  }
  int max=arr[0];
  int min=arr[0];
  for( int i=1; i<n; i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
      count++;
    }
    else if(arr[i]<min)
    {
      min=arr[i];
      count++;
    }
  }
  printf("%d", count);
}
