#include <stdio.h>

int main() {
  int ages[] = {10, 12, 18};

  int length = 3; // Hardcoded
  int calculatedLength = sizeof(ages) / sizeof(ages[0]);

  for (int i = 0; i < calculatedLength; i++) {
    printf("Agee in position %d is %d \n", i, ages[i]);
  }

  return 0;
}

