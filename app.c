#include <stdio.h>

int greaterValue(int values[], int size) {
  int largest = values[0];
  for (int i = 1; i < size; i++) {
    if (values[i] > largest) {
      largest = values[i];
    }
  }
  return largest;
}

int main() {
  int ages[] = {12, 16, 13, 88, 18, 21, 43};
  int agesLength = sizeof(ages) / sizeof(ages[0]);

  printf("Oldest: %d \n", greaterValue(ages, agesLength));
  return 0;
}

