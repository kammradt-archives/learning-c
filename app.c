#include <stdio.h>
#define MAX_LENGTH 50

int main() {
  printf("Insert your complete name: ");
  char name[MAX_LENGTH];
  fgets(name, MAX_LENGTH, stdin);
  printf("Name: %s", name);

  return 0;
}

