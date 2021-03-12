//136A - Presents
//set vd nhu input la 4 3 2 1 thi nguoi dau tien se tang qua
//cho nguoi thu 4, con nguoi thu 2 se tang qua cho nguoi thu 3 va tuong tu

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int numpeople,count=1,i=0,z;
  int present[110];

  scanf("%d", &numpeople);
  z=numpeople;
  while(numpeople--)
  {
    scanf("%d", &i);
    present[i-1]=count;
    count++;
  }
  //printf("%d",present[0]);
  for(int j=0; j<z; j++)
  {
    printf("%d ", present[j]);
  }
	return 0;
}
