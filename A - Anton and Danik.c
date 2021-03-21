#include <stdio.h>
 
int main() {
    int a, status, DA=0, AN=0;
    scanf("%d", &a);
 
    char str[100000];
    scanf("%s", str);
    for(int i=0; i<a; i++)
      {
        if(str[i]=='D') DA++;
        else AN++;
      }
  if(AN>DA) printf("Anton");
  else if(AN<DA) printf("Danik");
  else printf("Friendship");
    return 0;
}
