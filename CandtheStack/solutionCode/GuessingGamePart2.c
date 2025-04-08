/**
 * A continuation of the guessing game from the previous module. 
 * 
 * We will use the same guessing game before, but add
 * string prompts for the menu, and keep a history of the guesses using arrays. 
 * 
 * @author Albert Lionelle
 * @date 2024-04-01
 */

 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for random number generation
#include <string.h> // for string manipulation
#include <stdbool.h> // for boolean type

int getRandomNumber(int min, int max) {
    // Generate a random number between min and max
    return (rand() % (max - min + 1)) + min;
}

int getInput() {
    char buffer[20]; // Buffer to store input
    int input = 0;
    scanf("%s", buffer); 
    input = atoi(buffer);
    return input; 
}

bool runGame(int randomNumber, int* attempts, int* guesses, int maxAttempts) {
    int guess = 0;
    *attempts = 0;

    while (guess != randomNumber && *attempts < maxAttempts) {
        printf("Enter your guess (1-100): ");
        guess = getInput();
        guesses[*attempts] = guess;
        (*attempts)++;

        if (guess < randomNumber) {
            printf("Too low! Try again.\n");
        } else if (guess > randomNumber) {
            printf("Too high! Try again.\n");
        } 
    }

    return true;
}

void giveFeedback(int randomNumber, bool found, int attempts, int* guesses) {
    if (found) {
        printf("Congratulations! You guessed the number %d in %d attempts.\n", randomNumber, attempts);
       
    } else {
        printf("Game over! The number was %d.\n", randomNumber);
    }
    printf("Your guesses were: ");
    for (int i = 0; i < attempts; i++) {
        printf("%d ", guesses[i]);
    }
    printf("\n\n");
}
void start() {
    printf("Welcome to the Guessing Game!\n");
    char choice[10];

    while(strcasecmp(choice, "exit") != 0) {
        printf("Play Game\n");
        printf("Exit\n");
        printf("Enter your choice (play | exit): ");
        scanf("%s", choice);

        if (strcmp(choice, "play") == 0) {
            // Call the game function here
            int randomNumber = getRandomNumber(1, 100);
            int* guesses[100]; // Array to store guesses
            int attempts = 0; // Number of attempts made
            printf("Starting the game...\n");
            bool found = runGame(randomNumber, &attempts, guesses, 100);
            giveFeedback(randomNumber, found, attempts, guesses);
        } else if (strcmp(choice, "exit") == 0) {
            printf("Exiting the game...\n");
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

}

int main() {
    srand(time(NULL)); // Seed the random number generator
    start(); // Start the game menu
    return 0;
}