//723A - The New Year: Meeting Friends

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
  int arr[3], temp;
  scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
   //Sort the array in ascending order  
    for (int i = 0; i < 3; i++) {   
        for (int j = i+1; j < 3; j++) {   
           if(arr[i] > arr[j]) {  
               temp = arr[i];  
               arr[i] = arr[j];  
               arr[j] = temp;  
           }   
        }   
    }
  int out=arr[2]-arr[0]; //max-min
  printf("%d",out);
}
