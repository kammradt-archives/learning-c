#include <stdio.h>

int main() {
  int studentGrades[][4] = {
    {6, 7, 10, 3},
    {9, 3, 5, 2},
    {7, 10, 8, 6},
  };
  int length_columns = sizeof(studentGrades[0][0]);
  int length_rows = (sizeof(studentGrades) / length_columns) / sizeof(studentGrades[0][0]);

  for (int i = 0; i < length_rows; i++) {
    for (int j = 0; j < length_columns; j++) {
      printf("%d ", studentGrades[i][j]);
    }
    printf("\n");
  }

  return 0;
}

