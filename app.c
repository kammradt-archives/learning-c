#include <stdio.h>

int recursivePower(int number, int exponent) {
  if (exponent == 0) {
    return 1;
  }
  return number * recursivePower(number, exponent-1);
}

int main() {
  printf("Result: %d \n", recursivePower(4, 3));
  return 0;
}

