#include <stdio.h>
#include <stdbool.h>

void verificarIdade() {
  short int age;
  printf("How old are you? -> ");
  scanf("%hd", &age);

  if (age < 12) {
    printf("Kid \n");
  } else if (age < 18) {
    printf("Teen \n");
  } else {
    printf("Adult \n");
  }
}

int main() {
  verificarIdade();
  return 0;
}

