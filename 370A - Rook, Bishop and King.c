//370A - Rook, Bishop and King.c

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void rookmove(int r1, int c1, int r2, int c2)
{
  int rook=0;
  if(r1!=r2) rook++;
  if(c1!=c2) rook++;
  printf("%d ", rook);
}

void bishopmove(int r1, int c1, int r2, int c2)
{
  int start=0, done=0;
  if((r1%2==0 && c1%2==0) || (r1%2==1 && c1%2==1)) start=1;
  if((r2%2==0 && c2%2==0) || (r2%2==1 && c2%2==1)) done=1;
  if(start!=done) printf("0 ");       //check if in diagonally order
  else 
  {
    if((r1+c1)==(r2+c2)) printf("1 ");
    else if(r1-c1==r2-c2) printf("1 ");
    else printf("2 ");
  }
}
/*solution no 1 for king
void kingmove(int r1, int c1, int r2, int c2)
{
  int king=0;
  while(r1!=r2 || c1!=c2)
  {
    if(r1==r2) 
    {
      king+=abs(c2-c1);
      break;
    }
    else if(c1==c2)
    {
      king+=abs(r2-r1);
      break;
    }
    if(r1>r2 && c1>c2)  //up left case
    {
      c1--;
      r1--;
    }
    else if(r1>r2 && c1<c2)  //up right case
    {
      r1--;
      c1++;
    }
    else if(r1<r2 && c1<c2)  //down right case
    {
      r1++;
      c1++;
    }
    else if(r1<r2 && c1>c2)  //down left case
    {
      r1++;
      c1--;
    }
    king++;
  }
  printf("%d", king);
}
*/

//solution no 2 for king move
void kingmove(int r1, int c1, int r2, int c2)
{
  int a,b;
  a=abs(r1-r2);
  b=abs(c1-c2);
  if(a>b) printf("%d", a);
  else printf("%d", b);
}

int main(void)
{
  int r1,r2,c1,c2;
  scanf("%d %d %d %d", &r1, &c1, &r2, &c2);

  //rook move
  rookmove(r1,c1,r2,c2);
  bishopmove(r1,c1,r2,c2);
  kingmove(r1,c1,r2,c2);
}
