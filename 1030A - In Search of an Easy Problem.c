//1030A - In Search of an Easy Problem 
//if found any "1" then the status change to 1, if status=1 then HARD, else EASY.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	int n, state=0;

	while (t--)
	{
    int idea;
    scanf("%d", &idea);
    if(idea==1) 
    {
      state=1;
      break;
    }
	}
  if(state==1) printf("HARD");
  else printf("EASY");
	return 0;
}
