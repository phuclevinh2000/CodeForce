#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
 int t;
 scanf("%d", &t);
 while(t--)
 {
   //input
   int n, arr[300], a=0,b, count=0, count1;
   scanf("%d", &n);
   b=n-1;
   for(int i=0; i<n; i++)
   {
     scanf("%d", &arr[i]);
   }

   //solve
    for(int i=0; i<n/2; i++)
    {
      printf("%d %d ", arr[a], arr[b]);
      a++;
      b--;
    }
    if(n%2==1) printf("%d", arr[b]);
   printf("\n");
 }
}
