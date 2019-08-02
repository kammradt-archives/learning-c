#include <stdio.h>
#include "math-lib.h"

int main() {
  int ages[] = {12, 16, 13, 88, 18, 21, 43};
  int agesLength = sizeof(ages) / sizeof(ages[0]);

  printf("Oldest: %d \n", greaterValue(ages, agesLength));
  return 0;
}

