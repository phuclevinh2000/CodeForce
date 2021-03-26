//758A - Holiday Of Equality


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
  int n,temp,count=0;
  scanf("%d",&n);
  int arr[n];
  for(int i=0; i<n; i++)
  {
    scanf("%d", &arr[i]);
  }
  //Sort the array in ascending order  
    for (int i = 0; i < n; i++) {   
        for (int j = i+1; j < n; j++) {   
           if(arr[i] > arr[j]) {  
               temp = arr[i];  
               arr[i] = arr[j];  
               arr[j] = temp;  
           }   
        }   
    }
  for(int i=0;i<n;i++)
  {
    count+=(arr[n-1]-arr[i]);
  }
  printf("%d",count);
}
