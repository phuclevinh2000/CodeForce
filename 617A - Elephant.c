//617A-Elephant divide the step into %5

#include <stdio.h>
#include <string.h>
void elephant(int move);

int main(void) {
  int steps,move=0;
  scanf("%d", &steps);
  while(steps>5)
  {
    move++;
    steps-=5;
  }
    move++;
    printf("%d", move);
}

