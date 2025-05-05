/**
 * Solution code for Code Along: Vector
 * 
 * @author Albert Lionelle
 * @date 2025_05_04
 **/

#include <stdio.h>
#include <errno.h>


#include "NeuVector.h"

/**
 * Creates a new vector with the specified initial capacity.
 * 
 * @param initial_capacity The initial capacity of the vector.
 * @return A pointer to the newly created vector, or NULL if memory allocation fails.
 */
NeuVector* create_vector(size_t initial_capacity) {
    NeuVector* vector = (NeuVector*)malloc(sizeof(NeuVector));
    if (vector == NULL) {
        return NULL; // Memory allocation failed
    }
    vector->data = (int*)malloc(initial_capacity * sizeof(int));
    if (vector->data == NULL) {
        free(vector); // Free the vector structure if data allocation fails
        return NULL; // Memory allocation failed
    }
    vector->size = 0; // Initialize size to 0
    vector->capacity = initial_capacity; // Set the initial capacity
    return vector; // Return the newly created vector
}

/**
 * Frees the memory allocated for the vector.
 * 
 * @param vector A pointer to the vector to be freed.
 */
void free_vector(NeuVector* vector) {
    // TODO: Implement this function
}

/**
 * Appends an element to the end of the vector.
 * 
 * @param vector A pointer to the vector.
 * @param value The value to append.
 * @return 0 if successful, or -1 if memory allocation fails.
 */
void append_vector_element(NeuVector* vector, int value) {
    // TODO: Implement this function
}

/**
 * Finds the first occurrence of a value in the vector.
 * 
 * @param vector A pointer to the vector.
 * @param value The value to find.
 * @return The index of the first occurrence of the value, or -1 if the value is not found.
 */
int contains_element(NeuVector* vector, int value) {
    // TODO: Implement this function
    return -1;
}

/**
 * Gets the current capacity of the vector.
 * 
 * @param vector A pointer to the vector.
 * @return The capacity of the vector.
 */
int get_vector_capacity(NeuVector* vector) {
    // TODO: Implement this function
    return 0;
}

/**
 * Gets the element at the specified index in the vector.
 * 
 * @param vector A pointer to the vector.
 * @param index The index of the element to retrieve.
 * @return The value of the element at the specified index.
 */
int get_vector_element(NeuVector* vector, size_t index) {
    // TODO: Implement this function
    return -1;
}

/**
 * Gets the current size of the vector.
 * 
 * @param vector A pointer to the vector.
 * @return The number of elements in the vector.
 */
int get_vector_size(NeuVector* vector) {
    // TODO: Implement this function
    return 0;
}

/**
 * Inserts an element at the specified index in the vector.
 * 
 * @param vector A pointer to the vector.
 * @param index The index at which to insert the element.
 * @param value The value to insert.
 */
void insert_vector_element(NeuVector* vector, size_t index, int value) {
    // TODO: Implement this function
}

/**
 * Removes and returns the last element of the vector.
 * 
 * @param vector A pointer to the vector.
 * @return The value of the removed element, or -1 if the vector is empty.
 */
int pop_vector_element(NeuVector* vector) {
    // TODO: Implement this function
    return -1;
}

/**
 * Prints the elements of the vector to the standard output.
 * 
 * @param vector A pointer to the vector.
 */
void print_vector(NeuVector* vector) {
    // TODO: Implement this function
}

/**
 * Removes the element at the specified index in the vector.
 * 
 * @param vector A pointer to the vector.
 * @param index The index of the element to remove.
 * @return 0 if successful, or -1 if the index is out of bounds.
 */
int remove_vector_element(NeuVector* vector, size_t index) {
    // TODO: Implement this function
    return -1;
}

/**
 * Sets the element at the specified index in the vector.
 * 
 * @param vector A pointer to the vector.
 * @param index The index of the element to set.
 * @param value The value to set at the specified index.
 */
void set_vector_element(NeuVector* vector, size_t index, int value) {
    // TODO: Implement this function
}
