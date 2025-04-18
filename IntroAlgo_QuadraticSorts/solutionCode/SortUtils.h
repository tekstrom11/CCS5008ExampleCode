#ifndef SORTUTILS_H
#define SORTUTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define RAND_VAL_MAX 100 // Maximum value for random numbers
/**
 * Takes a clock count and converts it into human-readable time.
 * If the time is greater than 1 minute, it will print in minutes and seconds.
 * 
 * @param clockTicks The clock ticks to convert.
 *                   This is typically the result of a call to clock().
 */
void printTimeTaken(int clockTicks) {
    if (clockTicks > CLOCKS_PER_SEC * 60) {
        int minutes = clockTicks / (CLOCKS_PER_SEC * 60);
        int seconds = (clockTicks % (CLOCKS_PER_SEC * 60)) / CLOCKS_PER_SEC;
        printf("Time taken: %d minutes and %d seconds\n", minutes, seconds);
    } else {
        printf("Time taken: %.2f seconds\n", (double)clockTicks / CLOCKS_PER_SEC);
    }
}

/**
 * Times a function and returns the clock ticks taken to run it.
 * Assumes function takes in a pointer to an int array and an int size.
 */

 int timeFunction(void (*func)(int*, int), int* arr, int size) {
    clock_t start = clock();
    func(arr, size);
    clock_t end = clock();
    return (int)(end - start);
}


/** 
 * Prints an array of integers.
 * @param arr The array to print.
 */
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/**
 * Initializes random values in an array. 
 * 
 * @param arr The array to fill with random values.
 *            The array must be allocated before calling this function.
 * @param size The size of the array to build.
 * @return A pointer to the newly allocated array.
 *         The caller is responsible for freeing this memory.
 */
void initializeRandomArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % RAND_VAL_MAX; // random numbers between 0 and 99
    }    
}


#endif // SORTUTILS_H