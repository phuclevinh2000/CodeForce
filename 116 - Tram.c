//116 - Tram
//tinh so nguoi o tren tau lon nhat trong cung 1 thoi diem
#include <stdio.h>
#include <string.h>


int main()
{
  int max=0, n,ontrain=0;
  scanf("%d", &n);

  while(n--)
  {
    int a,b;
    scanf("%d %d", &a,&b);
    ontrain=ontrain-a+b;
    if(ontrain>=max) max=ontrain;
  }
  printf("%d", max);
  return 0;
}
