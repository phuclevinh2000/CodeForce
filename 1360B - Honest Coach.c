//		1360B - Honest Coach

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
  int t, win=0;
  scanf("%d", &t);
  while(t--)
  {
    int n, temp, min;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
      scanf("%d", &arr[i]);
    }

    //soft the array
     for (int i = 0; i < n; i++) {   
        for (int j = i+1; j < n; j++) {   
           if(arr[i] > arr[j]) {  
               temp = arr[i];  
               arr[i] = arr[j];  
               arr[j] = temp;  
           }   
        }   
    }  

    min=arr[1]-arr[0];
    for(int i=0; i<n-1; i++)
    {
      if(arr[i+1]-arr[i]<min)
      min=arr[i+1]-arr[i];
    }
    printf("%d\n", min);
  }
}
