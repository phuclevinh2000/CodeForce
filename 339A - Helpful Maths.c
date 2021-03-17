//339A - Helpful Maths

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char a[110];
  int arrayofnumber[110];
  int i,size=0, temp,j=0;

  //input
  scanf("%s", a);
  for(int i=0; i<strlen(a); i+=2)
  {
    arrayofnumber[j]=a[i]-48;     //luu y cho nay j chu khong phai i, gia tri j khac i
    //j++ con i+=2
    size++;
    j++;
  }


  //soft the array in ascending order
  for (int i = 0; i < size; i++) 
  {     
    for (int j = i+1; j < size; j++) 
    {     
        if(arrayofnumber[i] > arrayofnumber[j]) 
        {    
            temp = arrayofnumber[i];    
            arrayofnumber[i] = arrayofnumber[j];    
            arrayofnumber[j] = temp;    
        }     
    }     
  } 

  j=0;
 // print the result
  for(int i=0; i<strlen(a); i+=2)
  { 
    a[i]=arrayofnumber[j]+48;  //luu y cho nay j chu ko phai i, gia tri j khac i
    //j++ con i+=2
    //cong them 48 cua ascii 
    j++;
    
  }
  printf("%s",a);
}
