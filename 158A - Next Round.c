//158A - Next Round
//do no xep theo thu tu bang hoac giam dan nen chi can dem toi vi tri thu k, dong thoi la so duong, con sau do thi so sanh, neu nhu so sau bang so dau thi lay, neu khong thi khong lay
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n,k, count=0, mas[110],a;

  scanf("%d %d", &n, &k);
  int j=n;

  for (int i = 1; i <= n; i++) 
  {
        scanf("%d",&a);
        mas[i] = a;
   }
    for (int j = 1; j <= n; j++) 
    {
        if (mas[j] >= mas[k] && mas[j] > 0) 
        {
            count++;
        }
    }

  printf("%d", count);
	return 0;
}
