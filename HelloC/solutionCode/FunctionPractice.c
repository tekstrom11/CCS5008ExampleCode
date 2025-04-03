/**
 * Solution to Function Practice Code Along
 * 
 * This program demonstrates the use of functions in C.
 * 
 * @author Albert Lionelle
 * @date 2025-04-03
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h> // for int64_t type


double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;    
    }
    return a / b;
}

double modulus(uint64_t a, uint64_t b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;    
    }
    return a % b;
}

int main() {
    int a = 10;
    long b = 5;

    printf("Addition: %f\n", add(a, b));
    printf("Subtraction: %f\n", subtract(a, b));
    printf("Multiplication: %f\n", multiply(a, b));
    printf("Division: %f\n", divide(a, b));
    printf("Modulus: %f\n", modulus(a, b));

    long a2 = 1000000000;
    long b2 = 2000000000;
    printf("Addition: %f\n", add(a2, b2));
    printf("Subtraction: %f\n", subtract(a2, b2));
    printf("Multiplication: %f\n", multiply(a2, b2));
    printf("Division: %f\n", divide(a2, b2));
    printf("Modulus: %f\n", modulus(a2, b2));


    return 0;
}

