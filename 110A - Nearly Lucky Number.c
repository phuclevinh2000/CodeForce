//110A - Nearly Lucky Number
//luu y cho vong lap for
#include <stdio.h>
#include <string.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//2*n
//2 hang doc, n hang ngang
int main()
{
  char str[20],j=0;
  int count=0, status=0;
  scanf("%s", str);
  for(int i=0; i<strlen(str); i++)
  {
    if(str[i]=='4' || str[i]=='7') 
    {
      count++;
    }
  }

  if(count==0)
  {
    status=1;
  }
  else 
  {
    while(count>0)
    {
      int a=count%10;
      int b=a;
      if(a==7 || b==4)
      {
        
      }
      else 
      {
        status=1;
        break;
      }
      count/=10;
    }
  }
  if(status==0) printf("YES");
  else if(status==1) printf("NO");
}
