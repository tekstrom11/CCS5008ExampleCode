/**
 * The code along demonstrates the use of arrays in C programming.
 * This program will showcase various array operations such as initialization,
 * accessing elements, and iterating through the array.
 *
 * @author Albert Lionelle
 * @date 2024-04-08
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getSum(int *numbers, int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += numbers[i];
  }
  return sum;
}

void arraysFunctions() {
  int numbers[5]; // Array declaration
  int sum = 0;    // Variable to store the sum of the array elements

  // Array initialization
  for (int i = 0; i < 5; i++) {
    numbers[i] = i + 1; // Fill the array with values 1 to 5
  }
  sum = getSum(numbers, 5); // Call the function to get the sum of the array
  printf("Sum of array elements: %d\n", sum); // Print the sum
  printf("\n");
}

void arraysLoops() {
  int numbers[5] = {1, 2, 3, 4, 5}; // Array initialization
  for (int i = 0; i < 5; i++) {
    printf("numbers[%d] = %d\n", i, numbers[i]);
  }
  printf("\n");

  // Array of strings
  char names[3][20] = {"Alice", "Bob", "Charlie"}; // Array of strings
  for (int i = 0; i < 3; i++) {
    printf("names[%d] = %s\n", i, names[i]);
  }
  printf("\n");

  int evens[100]; // Array of size 100

  for (int i = 0; i < 100; i++) {
    evens[i] = i * 2; // Fill the array with even numbers
  }
  for (int i = 0; i < 100; i++) {
    printf("evens[%d] = %d\n", i, evens[i]);
  }
}

int main() {
  arraysLoops();
  arraysFunctions();
}