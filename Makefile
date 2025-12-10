# Compiler settings
CC = gcc
CFLAGS = -Wall -Wextra -O2 -Iinclude

# Auto-detect all source files
SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)

# Output library name
TARGET = libclib_math.a

all: $(TARGET)

# Build static library
$(TARGET): $(OBJ)
	ar rcs $(TARGET) $(OBJ)

# Compile .c into .o
src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
