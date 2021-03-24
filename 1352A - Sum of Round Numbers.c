//	581A - Vasya the Hipster

#include <stdio.h>
#include <string.h>

int main(void)
{
  int t;
  scanf("%d", &t);
  while(t--)
  {
    //input
    int k, count=0, value, out[5];
    scanf("%d", &k);
    int j=10;

    //solve
    while(j<=k)
    {
      value=k%j;
      if(value!=0) 
      {
        k-=value;
        out[count]=value;
        count++;
      }
      j*=10;
    }
    out[count]=k;

    //print the number of case
    printf("%d\n",count+1);

    // print those numbers
    for(int i=0; i<count+1; i++)
    {
      printf("%d ", out[i]);
    }
    printf("\n");
  }
}
