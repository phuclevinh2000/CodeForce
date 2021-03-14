//1501A - Alexey and Train
//chia thanh cac buoc: di, toi, nghi, khoihanh, tinh thoi gian cua tung buoc, nho phai dung ceil danh cho thoi gian nghi, neu khong thi se bi sai so
//tinh thoi gian di va thoi gian nghi bang cong thuc de cho,nho luu y dieu kien cua de bai ve thoi gian nghi
//tu do tinh duoc thoi gian khoi hanh bang dieu kien

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
  int testcase, numberofstation, i;
  scanf("%d", &testcase);
  while(testcase--)
  {
    int a[110],b[110],tm[110], di,toi=0,khoihanh=0,sum=0;
    double nghi;
    a[0]=0;
    b[0]=0;
    tm[0]=0;
  
    //input
    scanf("%d", &numberofstation);
    for(i=1; i<numberofstation+1; i++)
    {
      scanf("%d %d",&a[i], &b[i]);
    }
    for(i=1; i<numberofstation+1; i++)
    {
      scanf("%d", &tm[i]);
    }

    //tinh toan
    for(i=1; i<numberofstation+1; i++)
    {
      di=a[i]-b[i-1]+tm[i]; //di
      toi=khoihanh+di;  //thoi gian toi
      nghi=ceil(((float)b[i]-(float)a[i])/2); //thoi gian nghi

      if(b[i]>(toi+nghi))   //thoi gian khoi hanh
      {
        khoihanh=b[i];
      }
      else khoihanh=toi+nghi;
    }
       printf("%d\n", toi);
  }

	return 0;
}
