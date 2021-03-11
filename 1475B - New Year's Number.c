//1475B - New Year's Number
//sử dụng số dư, ta có a*2020+b*2021=n, dùng vòng lặp, chạy a từ 0-1000, lấy n-a*2020 thì ra b, nếu như b chia hết cho 2021 thì YES, nếu chạy hết vòng lặp hoặc khi 2020*i lớn hơn số n đề bài cho thì NO
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	int n, state;
	while (t>0)
	{
    state=0;
		scanf("%d", &n);
		for(int i=0;i<=1000;i++)
     {
      long long other=n-(2020*i);
      if(other<0) break;
      if((other%2021)==0) 
      {
        printf("YES\n");
        state=1;
      }
     }
     if(state==0) printf("NO\n");
     t--;
	}
	return 0;
}
