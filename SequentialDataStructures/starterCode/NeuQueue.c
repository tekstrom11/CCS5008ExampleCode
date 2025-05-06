/**
 * Starter code for Code Along - NeuQueue (circular queue)
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "NeuQueue.h"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "NeuQueue.h"

/**
 * Creates a new queue with the specified initial capacity.
 *
 * @param initial_capacity The initial capacity of the queue.
 * @return A pointer to the newly created queue, or NULL if memory allocation
 * fails.
 */
NeuQueue *create_queue(size_t initial_capacity) {
  // TODO: Implement this function
  return NULL;
}

/**
 * Frees the memory allocated for the queue.
 *
 * @param queue A pointer to the queue to be freed.
 */
void free_queue(NeuQueue *queue) {
  // TODO: Implement this function
}

/**
 * Removes and returns the front element of the queue.
 *
 * @param queue A pointer to the queue.
 * @return The value of the removed element, or -1 if the queue is empty.
 */
int dequeue(NeuQueue *queue) {
  // TODO: Implement this function
  return -1;
}

/**
 * Adds an element to the end of the queue.
 *
 * @param queue A pointer to the queue.
 * @param value The value to add to the queue.
 * @return 0 if successful, or -1 if the queue is full or memory allocation
 * fails.
 */
int enqueue(NeuQueue *queue, int value) {
  // TODO: Implement this function
  return -1;
}

/**
 * Checks if the queue is empty.
 *
 * @param queue A pointer to the queue.
 * @return true if the queue is empty, false otherwise.
 */
bool is_queue_empty(NeuQueue *queue) {
  // TODO: Implement this function
  return true;
}

/**
 * Checks if the queue is full.
 *
 * @param queue A pointer to the queue.
 * @return true if the queue is full, false otherwise.
 */
bool is_queue_full(NeuQueue *queue) {
  // TODO: Implement this function
  return false;
}

/**
 * Gets the current capacity of the queue.
 *
 * @param queue A pointer to the queue.
 * @return The capacity of the queue.
 */
int get_queue_capacity(NeuQueue *queue) {
  // TODO: Implement this function
  return 0;
}

/**
 * Gets the current size of the queue.
 *
 * @param queue A pointer to the queue.
 * @return The number of elements in the queue.
 */
int get_queue_size(NeuQueue *queue) {
  // TODO: Implement this function
  return 0;
}

/**
 * Gets the front element of the queue without removing it.
 *
 * @param queue A pointer to the queue.
 * @return The value of the front element, or -1 if the queue is empty.
 */
int peek_queue(NeuQueue *queue) {
  // TODO: Implement this function
  return -1;
}

/**
 * Prints the elements of the queue to the standard output.
 *
 * @param queue A pointer to the queue.
 */
void print_queue(NeuQueue *queue) {
  // TODO: Implement this function
}

/**
 * Converts the queue to a string representation.
 *
 * @param queue A pointer to the queue.
 * @return A string representation of the queue, or NULL if memory allocation
 * fails.
 */
const char *queue_to_string(NeuQueue *queue) {
  // Return NULL if queue is NULL
  if (queue == NULL) {
    return NULL;
  }

  // Allocate memory for string representation
  // Size calculation: [, ] + commas + each number (max 11 chars per int) + null
  // terminator
  size_t max_size =
      2 + (queue->size > 0 ? queue->size - 1 : 0) + (queue->size * 12) + 1;
  char *result = (char *)malloc(max_size * sizeof(char));
  if (result == NULL) {
    return NULL;
  }

  // Start with an opening bracket
  strcpy(result, "[");

  // If queue is not empty, add elements
  if (!is_queue_empty(queue)) {
    size_t current_pos = queue->front;

    for (size_t i = 0; i < queue->size; i++) {
      // Add current element
      char temp[12]; // Enough for any int value
      sprintf(temp, "%d", queue->data[current_pos]);
      strcat(result, temp);

      // Add comma if not the last element
      if (i < queue->size - 1) {
        strcat(result, ", ");
      }

      // Move to next position (circular)
      current_pos = (current_pos + 1) % queue->capacity;
    }
  }

  // Close with ending bracket
  strcat(result, "]");

  return result;
}