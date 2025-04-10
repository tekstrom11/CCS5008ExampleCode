/**
 * Sample file for Guessing Game Code Along Part 3
 *
 * This file contains various tests.
 *
 * @author Albert Lionelle
 * @date 2024-04-10
 */

#include "GuessingGame.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(0); // Seed the random number generator with a fixed value for
             // reproducibility
  int randomNumber = getRandomNumber(DEFAULT_MIN, DEFAULT_MAX);
  printf("Random number generated: %d\n", randomNumber);
  return 0;
}
