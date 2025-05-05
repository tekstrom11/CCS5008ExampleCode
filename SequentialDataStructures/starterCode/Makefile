# Makefile for Data Structures Programs - each of these targets
# lines up with a code along, so if you are
# in the Vector code along, your target is `make vector`
# If you are in the queue code along, your target is `make queue`

CC = gcc
CFLAGS = -Wall

# Vector target
VECTOR_TARGET = vectorTest.out
VECTOR_SRCS = NeuVector.c VectorMain.c


# Queue target
QUEUE_TARGET = queueTest.out
QUEUE_SRCS = Queue.c QueueMain.c

all: vector stack queue

vector: $(VECTOR_TARGET)

$(VECTOR_TARGET): $(VECTOR_SRCS)
	$(CC) $(CFLAGS) -o $(VECTOR_TARGET) $(VECTOR_SRCS)


queue: $(QUEUE_TARGET)

$(QUEUE_TARGET): $(QUEUE_SRCS)
	$(CC) $(CFLAGS) -o $(QUEUE_TARGET) $(QUEUE_SRCS)

clean:
	rm -f $(VECTOR_TARGET) $(STACK_TARGET) $(QUEUE_TARGET)