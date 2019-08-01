#include <stdio.h>
#include <stdbool.h>

int main() {
  int slices = 17;
  int friends = 2;
  double slicesPerPersonInt =  slices/friends; // Result will be 8.00000
  double slicesPerPersonDouble =  (double) slices/friends; // Result will be 8.5

  printf("Not using cast: %lf \n", slicesPerPersonInt);
  printf("Using cast: %lf \n", slicesPerPersonDouble);

  return 0;
}