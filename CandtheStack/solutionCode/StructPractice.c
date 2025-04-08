/**
 * Examples and exercises using structs.
 * This file will include definitions and examples of struct usage in C.
 *
 * @author Albert Lionelle
 * @date 2024-04-08

 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char name[50];
  int age;
} Person;

typedef struct {
  char title[100];
  char author[50];
  int year;
} Book;

void printPerson(Person *p) { printf("Name: %s, Age: %d\n", p->name, p->age); }

void printBook(Book *b) {
  printf("Title: %s, Author: %s, Year: %d\n", b->title, b->author, b->year);
}

void updatePersonAge(Person *p, int newAge) { p->age = newAge; }

void updateBookTitle(Book *b, const char *newTitle) {
  strncpy(b->title, newTitle, sizeof(b->title) - 1);
  b->title[sizeof(b->title) - 1] = '\0'; // Ensure null termination
}

int checkDrinkingAge(Person *p) {
  if (p->age >= 21) {
    printf("%s is of legal drinking age.\n", p->name);
    return 1; // true
  } else {
    printf("%s is not of legal drinking age.\n", p->name);
    return 0; // false
  }
}

int main() {
  Person person1;
  strcpy(person1.name, "Alice");
  person1.age = 25;
  printPerson(&person1);
  updatePersonAge(&person1, 30);
  printPerson(&person1);
  checkDrinkingAge(&person1);

  Person person2 = {"Bob", 18};
  printPerson(&person2);
  updatePersonAge(&person2, 20);
  printPerson(&person2);
  checkDrinkingAge(&person2);

  Person people[2] = {person1, person2};
  for (int i = 0; i < 2; i++) {
    printPerson(&people[i]);
    checkDrinkingAge(&people[i]);
  }

  Person people2[2] = {{"Alice", 25}, {"Bob", 18}};
  for (int i = 0; i < 2; i++) {
    printPerson(&people2[i]);
    checkDrinkingAge(&people2[i]);
  }

  Book book1 = {"The Great Gatsby", "F. Scott Fitzgerald", 1925};
  printBook(&book1);

  updateBookTitle(&book1, "The Great Gatsby (Updated Edition)");
  printBook(&book1);

  Book book2 = {"1984", "George Orwell", 1949};
  printBook(&book2);

  return 0;
}
