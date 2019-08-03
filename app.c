#include <stdio.h>

void square(int *pointer) {
  *pointer = *pointer * *pointer;
}

int main() {
  int number = 100;
  int *pointer = &number; //Location of 'number'
  printf("Number: %d \n", number);
  printf("Pointer: %d \n\n", *pointer);

  number = 200;
  printf("Number: %d \n", number);
  printf("Pointer: %d \n\n", *pointer);

  *pointer = 300;
  printf("Number: %d \n", number);
  printf("Pointer: %d \n\n", *pointer);

  int newNumber =  1000;
  pointer = &newNumber;

  printf("Number: %d \n", number);
  printf("New Number: %d \n", newNumber);
  printf("Pointer: %d \n\n", *pointer);

  int value = 5;
  square(&value);
  printf("5x5: %d \n", value);

  return 0;
}

