//236A - Boy or Girl
//set the whole array as 0, run a nested loop to set the character as 1, then run another nested loop to count how many 1 found, that is the number of unique character

#include<stdio.h>
#include<string.h>

// function to return the number of unique
// characters in str[]
int count_unique_char(char* str) {

	int hash[128] = { 0 };
	int i, c = 0;

	// reading each character of str[]
	for (i = 0; i < strlen(str); ++i) {
		// set the position corresponding 
		// to the ASCII value of str[i] in hash[] to 1
		hash[str[i]] = 1;
	}

	// counting number of unique characters
	// repeated elements are only counted once
	for (i = 0; i < 128; ++i) {
		c += hash[i];
	}

	return c;

}

int main() {

	char str[300];
  int x;

	gets(str);

	//printf("%d", count_unique_char(str));
  x=count_unique_char(str);
  if(x%2==0) printf("CHAT WITH HER!");
  else printf("IGNORE HIM!");

}
