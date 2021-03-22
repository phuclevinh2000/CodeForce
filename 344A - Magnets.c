//	344A - Magnets


#include <stdio.h>
#include <string.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
  int n, count=0;
  scanf("%d", &n);

  int arr[n];
  for(int i=0; i<n; i++)  //input
   {
     scanf("%d", &arr[i]);
   }

  for(int i=0; i<n-1; i++)
  {
    if(arr[i]!=arr[i+1]) count++;
  }
  printf("%d", count+1); //tai truong hop cuoi cung chua tinh phai cong them 1 vao
}
