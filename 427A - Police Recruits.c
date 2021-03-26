//427A - Police Recruits.c
//so tu trai sang phai
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
  int t;
  int crime=0, police=0,n,un=0;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d", &n);
    if(n>0) police+=n;
    else if(n==-1) crime++;
    //truong hop ko co canh sat ranh
    if(crime!=0 && police==0) 
    {
      un++;
      crime--;
    }
    //truong hop co canh sat ranh
    else if(crime!=0 && police>0)
    {
      police--;
      crime--;
    }
  }
   printf(" %d \n",un);
}
