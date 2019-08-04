#include <stdio.h>

struct person {
  int age;
  int salary;
};

struct address {
  int houseNumber;
  char street[30];
};

struct completeData {
  int id;
  struct person person;
  struct address address;
};

int main() {
  struct person vini = { 19, 800 };
  printf("The age is: %d, and the salary: %d. \n", vini.age, vini.salary);

  struct address house = { 130, "Guilherme Kock" };
  printf("The house number is: %d, and the street: %s. \n\n", house.houseNumber, house.street);

  struct completeData completeObject= {
    123,
    {18, 800},
    {130, "Guilherme Kock"},
  };

  printf("Lets print a complete object w/ struct. \n");
  printf("The age is: %d, the salary is: %d. \nThe house number is: %d and the street name is: %s. The ID is: %d. \n",
  completeObject.person.age,
  completeObject.person.salary,
  completeObject.address.houseNumber,
  completeObject.address.street,
  completeObject.id);
  return 0;
}

