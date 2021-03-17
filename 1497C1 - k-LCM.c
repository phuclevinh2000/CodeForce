#include<stdio.h>
 
  int am(int a){
	int counter=0;
	for(int i=1;i<=a;i++){
		if(a%i==0)
			counter++;
	}
	if(counter==2)
		return 1;
	else
		return 0;
  }
 
int main()
{
int test;
scanf("%d", &test);
 
while(test--)
{
  int n,k,a,b,c;
  scanf("%d %d", &n, &k);
  int check=am(n);
  if(n%2 == 0) 
  {
    a=n/2;
    if(a%2==1)
    {
      a--;
      b=a;
      c=n-a*2;
    }
    else 
    {
      b=(n-a)/2;
      c=b;
    }
 
    
  }
  else if(n%3==0){
    a=n/3;
    b=a;
    c=a;
  }
  else {
    a=1;
    b=(n-1)/2;
    c=b;
  }
  printf("%d %d %d\n", a,b,c);
}
}
