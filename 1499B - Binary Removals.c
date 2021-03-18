#include <stdio.h>
#include <string.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int t;
  scanf("%d", &t);
  while(t--)
  {
    char s[100],state=0,count=0,status=1,start=0;
    scanf("%s", s);
    for(int i=0; i<strlen(s);i++)
    {
     // printf("%d %d %d ", s[i], s[i+1], i);
      if((s[i]==49) && (s[i+1]==49))
      {
        count=i;
        start=1;
       // printf("")
        break;
      }
    }
    if(count==0 && start==0)
    {
      status=1;
    }
    else 
    {
     // printf("%d",count);
      for(int j=count;j<strlen(s);j++)
      {
        if(s[j]=='0' && s[j+1]=='0')
        {
          status=0;
          break;
        }
      }
    }
    if(status==0) printf("NO\n");
    else printf("YES\n");
  }
}
