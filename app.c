#include <stdio.h>
#include <stdbool.h>

int main() {
  short int inputInt;
  do {
    printf("Enter a number between 0 and 10: ");
    scanf("%hd", &inputInt);
  } while (inputInt <= 0 || inputInt >= 10 );

  return 0;
}

