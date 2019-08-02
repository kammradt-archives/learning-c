#include <stdio.h>

int square(int number) {
  return number * number;
}

int cube(int number) {
  return number * number * number;
}

int power(int number, int exponent) {
  int result = 1;
  for (int i = 0; i < exponent; i++) {
    result *= number;
  }
  return result;
}

int main() {
  printf("Result: %d \n", square(4));
  printf("Result: %d \n", cube(4));
  printf("Result: %d \n", power(4, 3));
  return 0;
}

