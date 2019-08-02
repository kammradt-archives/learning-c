#include "math-lib.h"

int greaterValue(int values[], int size) {
  int largest = values[0];
  for (int i = 1; i < size; i++) {
    if (values[i] > largest) {
      largest = values[i];
    }
  }
  return largest;
}

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

int recursivePower(int number, int exponent) {
  if (exponent == 0) {
    return 1;
  }
  return number * recursivePower(number, exponent-1);
}