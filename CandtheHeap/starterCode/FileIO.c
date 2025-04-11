/**
 * Starter Code for Reading List Part 2: FileIO code along

 */

 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char author[100];
  char title[256];
  int year;
} Book;

typedef struct {
  Book *books;
  int size;
  int current;
} ReadingList;

ReadingList *createReadingList(int size) {
  ReadingList *readingList = (ReadingList *)malloc(sizeof(ReadingList));
  readingList->books = (Book *)malloc(sizeof(Book) * size);
  readingList->size = size;
  readingList->current = 0;
  return readingList;
}

void copyString(char *dest, const char *src, int size) {
  strncpy(dest, src, size - 1);
  dest[size - 1] = '\0'; // Ensure null-termination
}

void addBook(ReadingList *readingList, const char *author, const char *title,
             int year) {
  int index = readingList->current;
  copyString(readingList->books[index].author, author,
             sizeof(readingList->books[index].author));
  copyString(readingList->books[index].title, title,
             sizeof(readingList->books[index].title));
  readingList->books[index].year = year;
  readingList->current++;
}
void printReadingList(ReadingList *readingList) {
  for (int i = 0; i < readingList->current; i++) {
    printf("Book %d: %s by %s (%d)\n", i + 1, readingList->books[i].title,
           readingList->books[i].author, readingList->books[i].year);
  }
}

void removeBook(ReadingList *readingList, int index) {
  if (index < 0 || index >= readingList->current) {
    printf("Invalid index\n");
    return;
  }
  for (int i = index; i < readingList->current - 1; i++) {
    readingList->books[i] = readingList->books[i + 1];
  }
  readingList->current--;
}

void freeLibrary(ReadingList *library) {
  free(library->books);
  free(library);
}

int main() {
  ReadingList *library = createReadingList(5);

//   addBook(library, "Brandon Sanderson", "Mistborn: The Final Empire", 2006);
//   addBook(library, "Frank Herbert", "Dune", 1965);
//   addBook(library, "J.R.R. Tolkien", "The Fellowship of the Ring", 1954);

  printReadingList(library);
  printf("\n");
  removeBook(library, 1); // Remove the book at index 1 (Dune)
  printReadingList(library);

  freeLibrary(library);

  return 0;
}