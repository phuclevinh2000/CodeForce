//A- Theatre Square.c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(){
	long long int n,m,a,x,y;
    scanf("%lld %lld %lld", &n, &m, &a);
    x = (n%a == 0) ? (n/a) : (n/a+1);
    y = (m%a == 0) ? (m/a) : (m/a+1);
    printf("%lld", x*y);
 
}
