/**
* Test file for the hashtable implementation.
**/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "NeuHashtable.h"


int main(int argc, char *argv[]) {
    // Create a new hashtable
    NeuHashtable* hashtable = create_hashtable(10);

   

    // Free the hashtable
    free_hashtable(hashtable);

    return 0;
}

