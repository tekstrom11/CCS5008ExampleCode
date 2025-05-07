# Makefile for Sorted Structures and Trees
CC = gcc
CFLAGS = -Wall

# Vector target
SORTED_QUEUE_TARGET = sortedTest.out
SORTED_QUEUE_TARGET = NeuPriorityQueue.c PriorityMain.c

# Queue target
BINARY_TREE_TARGET = bstTest.out
BINARY_TREE_SRC = NeuBST.c BSTMain.c

# Singly Linked List target
HEAP_TARGET = heapTest.out
HEAP_SRCS = NeuHeap.c HeapMain.c

all: sorted bst heap

sorted: $(SORTED_QUEUE_TARGET)

$(SORTED_QUEUE): $(SORTED_QUEUE_SRCS)
	$(CC) $(CFLAGS) -o $(SORTED_QUEUE_TARGET) $(SORTED_QUEUE_SRCS)

bst: $(BST_TREE_TARGET)

$(BST_TREE_TARGET): $(BST_TREE_SRCS)
	$(CC) $(CFLAGS) -o $(BST_TREE_TARGET) $(BST_TREE_SRCS)

heap: $(HEAP_TARGET)

$(HEAP_TARGET): $(HEAP_SRCS)
	$(CC) $(CFLAGS) -o $(HEAP_TARGET) $(HEAP_SRCS)

clean:
	rm -f *.out
