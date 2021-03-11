//281A - Word Capitalization using ASCII code table

#include<stdio.h>
#include<string.h>
#include <stdlib.h>

// function to return the number of unique
// characters in str[]
void capitalization(char* s) {

int i;

for(i=0;i<strlen(s);i++){
        if(s[0]>=97&&s[0]<=122) s[0]=65+s[0]-97;
    }
    printf("%s\n",s);
}

int main() {

	char str[1000];

	scanf("%s",str);
  
  capitalization(str);

}
