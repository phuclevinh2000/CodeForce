//520A - Pangram

#include <stdio.h>
#include <string.h>

int main(){
  int n;
  char str[100], count=0;

  scanf("%d", &n);
  scanf("%s", str);

  //convert into lowercase
  for(int i=0; i<n; i++)
  {
    if(str[i]<97) str[i]+=32;
  }
  
  //check
  if(n<26) printf("NO");
  else 
  {
    // Pick all elements one by one
    for (int i=0; i<n; i++)
    {
        // Check if the picked element is already printed
        int j;
        for (j=0; j<i; j++)
           if (str[i] == str[j])
               break;
  
        // If not printed earlier, then print it
        if (i == j)
          count++;
    }
    if(count>=26) printf("YES");
    else printf("NO");
  }
}
