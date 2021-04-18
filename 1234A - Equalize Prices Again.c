#include <stdio.h>
#include <math.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		double n, sum=0, add, i;
		scanf("%lf", &n);
		for(i=0; i<n; i++)
		{
			scanf("%lf", &add);
			sum+=add;
		}
		printf("%.0lf\n", ceil(sum/n));
	}
}
