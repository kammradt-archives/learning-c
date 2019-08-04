#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Person {
  char name[30];
  int age;
  bool is_cool;
};

struct Person *createUser(char name[], int age, bool is_cool) {
  struct Person *newPerson =  malloc(sizeof(struct Person));
  strcpy(newPerson->name, name);
  newPerson->age = age;
  newPerson->is_cool = is_cool;
  return newPerson;
}

int main() {
  struct Person *user = createUser("Vini Kamm", 19 , true);
  printf("%s %d %d", user->name, user->age, user->is_cool);

  free(user);
  return 0;
}

