#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("How many 'ints' do you want? -> ");
  int size;
  scanf("%d", &size);

  int *my_pointer = malloc(size * sizeof(int));

  if(my_pointer==0) {
    printf("Invalid pointer. Error allocating memory. \n\n");
    return -1;
  } else {
    for (int i = 0; i < size; i++) {
      printf("Type the %d element: ", i);
      scanf("%d", &my_pointer[i]);
    }

    printf("The array: \n\n");
    for (int i = 0; i < size; i++) {
      printf("The %d element: %d\n", i, my_pointer[i]);
    }
  }
  free(my_pointer);
  return 0;
}

