//1426A - Floor Number
// nghi don gian th, dung function while 

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int testcase;
  scanf("%d", &testcase);

  while(testcase--)
  {
    int n,x, room=2, floor=1;

    scanf("%d %d", &n,&x);

    while(room<n)
    {
      room+=x;
      floor++;
    }
    printf("%d\n",floor);
  }

	return 0;
}
