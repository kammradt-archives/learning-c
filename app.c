#include <stdio.h>
#include <stdlib.h>

int increment(){
  int static x = 0;
  x++;
  printf("%d\n", x);
}

int main() {
  increment();
  increment();
  increment();
  return 0;
}

