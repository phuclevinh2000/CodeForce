//266B - Queue at the School
//swap the position of the boy and girl if boy stand front of girl t time

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n,t;
  char line[51];

  scanf("%d %d", &n, &t);
  scanf("%s", line);

  while(t--)
  {
    for(int i=0; i<n; i++)
    {
        if(line[i]=='B' && line[i+1]=='G')
        {
          line[i]='G';
          line[i+1]='B';
          i++;
        }
    }
  }

  printf("%s", line);
	return 0;
}
