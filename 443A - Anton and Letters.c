

#include <stdio.h>
#include <string.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printDistinct(int arr[], int n) 
{ 
    int dem=0;
    // Pick all elements one by one 
    for (int i=0; i<n; i++) 
    { 
        // Check if the picked element is already printed 
        int j; 
        for (j=0; j<i; j++) 
           if (arr[i] == arr[j]) 
               break; 
  
        // If not printed earlier, then print it 
        if (i == j) 
          dem++;
    } 
    printf("%d", dem-1);  //do dem no se dem luon truong hop cuoi cung
}

int main()
{
  char str[1100];
  int arr[1100], count=0;
  fgets(str, 1100, stdin);

  for(int i=1; i<=strlen(str)-1; i+=3)
  {
    arr[count]=str[i];
    count++;
  }

  if(strlen(str)==3) printf("0"); //truong hop {}
  else printDistinct(arr, count+1);
}
