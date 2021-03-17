#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
 
int main(void)
{
  int t;
  scanf("%d", &t);
 
  while(t--)
  {
  int a[100],b[100],count=0;
	int n,i,size,k;
	scanf("%d",&size);
	for(int i=0;i<size;i++){
      scanf("%d",&a[i]);
    }
	for (i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
		   if(a[i]>a[j]){
			   k=a[i];
			   a[i]=a[j];
			   a[j]=k;
		    }
		}
	}
 
    for(int i=1; i<size; i++)
    {
      if(a[i]==a[i-1]) 
      {
        b[count]=a[i];
        count++;
      }
    }
 
    for (int i=0; i<size; i++) 
    { 
        // Check if the picked element is already printed 
        int j; 
        for (j=0; j<i; j++) 
           if (a[i] == a[j]) 
            break;
  
        // If not printed earlier, then print it 
        if (i == j) 
          printf("%d ",a[i]);
    }
    for(int i=0;i<count;i++)
    {
      printf("%d ",b[i]);
    }
   printf("\n");
  }
}
