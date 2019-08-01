#include <stdio.h>
#include <stdbool.h>

int main() {
  int a = 10;
  float b = 20.5;
  double c = 12.5;
  printf("int size: %ld bytes. \n", sizeof(a));
  printf("float size: %lu bytes. \n", sizeof(b));
  printf("double size:  %lu bytes. \n", sizeof(c));

  bool t = true;
  bool f = false;
  printf("True boolean value: %d \n", t);
  printf("False boolean value: %d \n", f);
  printf("True boolean value size: %ld \n", sizeof(t));
  printf("False boolean value size: %ld \n", sizeof(f));

  return 0;
}