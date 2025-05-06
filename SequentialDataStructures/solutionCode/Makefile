# Makefile for Data Structures Programs

CC = gcc
CFLAGS = -Wall

# Vector target
VECTOR_TARGET = vectorTest.out
VECTOR_SRCS = NeuVector.c VectorMain.c

# Queue target
QUEUE_TARGET = queueTest.out
QUEUE_SRCS = NeuQueue.c QueueMain.c

all: vector stack queue

vector: $(VECTOR_TARGET)

$(VECTOR_TARGET): $(VECTOR_SRCS)
	$(CC) $(CFLAGS) -o $(VECTOR_TARGET) $(VECTOR_SRCS)

queue: $(QUEUE_TARGET)

$(QUEUE_TARGET): $(QUEUE_SRCS)
	$(CC) $(CFLAGS) -o $(QUEUE_TARGET) $(QUEUE_SRCS)

clean:
	rm -f $(VECTOR_TARGET) $(STACK_TARGET) $(QUEUE_TARGET)
