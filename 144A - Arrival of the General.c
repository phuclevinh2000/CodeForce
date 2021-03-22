//	144A - Arrival of the General


#include <stdio.h>
#include <string.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
  int n, max=0, min, locationmax, locationmin;
  scanf("%d", &n);

  int arr[100], output;
  for(int i=0; i<n; i++)
  {
    scanf("%d", &arr[i]);
  }

  locationmin=0;
  locationmax=0;
  min=arr[0];

  //tim vi tri cua max va min
  for(int i=0; i<n; i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
      locationmax=i;
    }
    if(arr[i]<=min)
    {
      min=arr[i];
      locationmin=i;
    }
  }

  if(locationmax>locationmin) // xet truong hop neu nhu vi tri cua max > min thi bo di 1 lan doi do lan do max doi cho vs min
  output= locationmax+(n-1-locationmin)-1;
  else output= locationmax+(n-1-locationmin);
  printf("%d", output);
}
