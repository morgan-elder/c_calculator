# compiler: gcc for C program
CC = gcc

# compiler flags
# -Wall turns on compiler warning
CFLAGS = -g -Wall

# target executable
TARGET = calculator

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c operations.c

clean: 
	$(RM) $(TARGET) 