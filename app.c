#include <stdio.h>
#include <string.h>

int main() {
  char name[9];
  printf("Insert your name: ");
  scanf("%8s", name);

  char copy[9];
  strcpy(copy, name);
  printf("Copied name: %s \n", copy);

  char message[] = " is amazing! \n";
  strcat(copy, message);
  printf("Message of the day: %s", copy);
  return 0;
}

