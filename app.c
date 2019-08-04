#include <stdio.h>
#include <stdbool.h>

struct Name {
  char first_name[50];
  char last_name[50];
  char nickname[50];
};

struct Address {
  char country[30];
  char state[30];
  char city[30];
  char street_name[100];
  int house_number;
  int zipcode;
};

struct Hobby {
  char name[30];
  bool is_multiplayer;
};

struct DatabaseRecord {
  struct Name name;
  struct Address address;
  struct Hobby *hobbies[3];
};

int main() {
  struct Name user = {
    "Vinicius",
    "Kammradt",
    "kamm"
  };

  struct Address address = {
    "Brazil",
    "SC",
    "Joinville",
    "Street 1",
    199,
    89223123
  };

  struct Hobby hobby1 = {
    "Soccer",
    true
  };
  struct Hobby hobby2 = {
    "Draw",
    false
  };
  struct Hobby hobby3 = {
    "Fifa",
    true
  };

  struct Hobby hobbies[] = {
    hobby1, hobby2, hobby3
  };

  struct DatabaseRecord record = {
    user,
    address,
    hobbies
  };

  printf("First name: %s\nLast name: %s\nNickname: %s\n\n",
  record.name.first_name,
  record.name.last_name,
  record.name.nickname);

  printf("Country: %s\nState: %s\nCity: %s\nStreet name: %s\nHouse number: %d\nZipcode: %d\n\n",
  record.address.country,
  record.address.state,
  record.address.city,
  record.address.street_name,
  record.address.house_number,
  record.address.zipcode);

  for (int i = 0; i < 2; i++) {
    printf("Hobby: %s\nCan play with friends?: ", hobbies[i].name);
    printf(hobbies[i].is_multiplayer ? "Yes!\n\n" : "No!\n\n");
  }

  return 0;
}

