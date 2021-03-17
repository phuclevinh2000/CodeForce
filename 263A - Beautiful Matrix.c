//263A - Beautiful Matrix
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
   int matrix[6][6], cot, dong;
   for(int i=1; i<=5; i++)
   {
      for(int j=1; j<=5; j++)
      {
         scanf("%d", &matrix[i][j]);
         if(matrix[i][j]==1)
         {
            cot=abs(3-j);
            dong=abs(3-i);
         }
      }
   }
   printf("%d",dong+cot);
}
