//	1353B - Two Arrays And Swaps
#include <stdio.h>
#include <string.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void soft(int arr[], int n)
{
  int temp;
  for (int i = 0; i < n; i++) {   
      for (int j = i+1; j < n; j++) {   
          if(arr[i] > arr[j]) {  
              temp = arr[i];  
              arr[i] = arr[j];  
              arr[j] = temp;  
          }   
      }   
  }  
}

int main()
{
  int t;
  scanf("%d", &t);
  while(t--)
  {
    //input
    int n,k, temp,a,b;
    scanf("%d %d", &n, &k);
    int arr1[n], arr2[n];
    for(int i=0; i<n; i++)
    {
      scanf("%d", &arr1[i]);
    }
    for(int i=0; i<n; i++)
    {
      scanf("%d", &arr2[i]);
    }

    //soft the array
    soft(arr1, n);
    soft(arr2, n);

    //swap the array
    int m=n-1;
    for(int i=0; i<k; i++)
    {
      if(arr2[m]>arr1[i])
      {
        arr1[i]=arr2[m];
        m--;
      }
    }

    //find the sum
    int sum=0;
    for(int i=0; i<n; i++)
    {
      sum+=arr1[i];
    }
    printf("%d\n", sum);;
  }
}
