//1512B - Almost Rectangle
#include <stdio.h>
#include <string.h>

int main(void) {
  int t;
  scanf("%d", &t);
  while(t--)
  {
    int n, status=0, dong,cot,dong1,cot1; 
    //unsigned long length[400];
    scanf("%d", &n);
    char str[n][n];
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf(" %c",&str[i][j]);
            }
        }
    
    for(int i=0; i<n; i++)
    {
      //printf("%ld", length);
      for(int j=0; j<n; j++)
      {
        if(str[i][j]=='*' && status==0) 
				{
					dong=i;
					cot=j;
					status++;
				}
				if(str[i][j]=='*' && status==1) 
				{
					dong1=i;
					cot1=j;
				}
      }

    }
    //printf("%d %d %d %d\n",dong,cot,dong1,cot1);
    if(dong1==dong)
        {
            if(dong==n-1)
            {
                str[dong-1][cot ]='*';
                str[dong1-1][cot1]='*';
            }
            else
            {
                str[dong+1][cot]='*';
                str[dong1+1][cot1]='*';
            }
        }
        else if(cot==cot1)
        {
            if(cot==n-1)
            {
                str[dong][cot-1]='*';
                str[dong1][cot1-1]='*';
            }
            else
            {
                str[dong][cot+1]='*';
                str[dong1][cot1+1]='*';
            }
        }
        else
        {
            str[dong][cot1]='*';
            str[dong1][cot]='*';
        }
    for(int i=0;i<n;i++,printf("\n"))
            for(int j=0;j<n;j++)
                printf("%c",str[i][j]);
  }
  return 0;
}
