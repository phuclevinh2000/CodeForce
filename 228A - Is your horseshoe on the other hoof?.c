//	228A - Is your horseshoe on the other hoof?


#include <stdio.h>
#include <string.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
  int s[4], length=4, temp;
  scanf("%d %d %d %d", &s[0], &s[1], &s[2], &s[3]);

   for (int i = 0; i < length; i++) //soft the array
    {     
        for (int j = i+1; j < length; j++) {     
           if(s[i] > s[j]) {    
               temp = s[i];    
               s[i] = s[j];    
               s[j] = temp;    
           }     
        }     
    } 

    int count=0;
    for(int i=0; i<length-1; i++)   
    {
      if(s[i]==s[i+1]) count++;
    }
    printf("%d", count);
}
