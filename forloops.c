#include <stdio.h>

//Link to exercise: https://www.learn-c.org/en/For_loops

int main() {
  int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int factorial =  array[9] * array[8];

  for(int i = 7; i > 0; i--){
    factorial = factorial * array[i];
  }

  printf("10! is %d.\n", factorial);
}