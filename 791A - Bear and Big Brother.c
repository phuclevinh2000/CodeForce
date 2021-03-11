//791A - Bear and Big Brother
//Limak is tripled after every year, Bob is double after each year

#include<stdio.h>
#include <stdlib.h>

int Calculate(int limak, int bob)
{
  int year=0;
  while(limak<=bob)
  {
    limak*=3;
    bob*=2;
    year++;
  }
  return year;
}

int main() {

	int limak,bob, print;

	scanf("%d %d",&limak, &bob);
  
  print=Calculate(limak,bob);

  printf("%d", print);

}
