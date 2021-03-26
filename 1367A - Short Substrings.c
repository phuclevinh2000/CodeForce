
//1367A - Short Substrings
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    char str[1000], out[1000]={0},count=0;
    scanf("%s", str);
    int n=strlen(str);
    
    //neu so ki tu nho hon 2 thi in ra luon
    if(n<=2) printf("%s\n", str);

    //con ko chia 2 phan dau va cuoi
    else {
    for(int i=0; i<n-1; i+=2)
    {
      out[count]=str[i];
      count++;
    }
    out[count]=str[n-1];
    printf("%s\n", out);
    }
    
  }
}
