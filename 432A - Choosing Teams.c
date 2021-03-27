//	432A - Choosing Teams
#include <stdio.h>
#include <string.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int n,k, temp, count=0;
  scanf("%d %d", &n, &k);
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

  //solve
  temp=0;
  for(int i=0; i<n; i++)
  {
    //check if that member has enough quality to participant
    if(k+arr[i]<=5)     
    {
      temp++;
    }
    //if the team is enough 3 people, then count ++
    if(temp==3)
    {
      temp=0;
      count++;
    }
  }
  printf("%d", count);
}
