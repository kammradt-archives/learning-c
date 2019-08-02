#include <stdio.h>
#include <string.h>

int main() {
  char name[9];
  printf("Insert your name: ");
  scanf("%8s", name);

  int counter = 0;
  while (name[counter] != '\0') {
    counter++;
  }
  printf("Name length: %d \n", counter);
  printf("Name length: %ld \n", strlen(name));

  if (strcmp(name, "vini") == 0) {
    printf("You typed 'vini' \n");
  } else {
    printf("You do not typed 'vini' \n");
  }

  strcmp(name, "vini") == 0 ? printf("You typed 'vini' \n") : printf("You do not typed 'vini' \n");

  return 0;
}

