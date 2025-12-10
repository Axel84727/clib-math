# Compiler settings
CC = gcc
CFLAGS = -Wall -Wextra -O2 -Iinclude

# Auto-detect all source files
SRC = $(wildcard src/*.c)

# Build directories
BUILD_DIR = build
BUILD_SRC_DIR = $(BUILD_DIR)/src
LIB_DIR = library

# Map source files to object files under build/
OBJ = $(patsubst src/%.c,$(BUILD_SRC_DIR)/%.o,$(SRC))

# Output library name (placed under library/)
TARGET = $(LIB_DIR)/libclib_math.a
TESTDIR = tests

.PHONY: all clean

all: $(TARGET)

# Build static library
$(TARGET): $(OBJ) | $(LIB_DIR)
	ar rcs $(TARGET) $(OBJ)

$(LIB_DIR):
	mkdir -p $(LIB_DIR)

# Compile .c into .o
$(BUILD_SRC_DIR)/%.o: src/%.c | $(BUILD_SRC_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_SRC_DIR): | $(BUILD_DIR)
	mkdir -p $(BUILD_SRC_DIR)


%: $(TESTDIR)/%.c $(TARGET) | $(BUILD_DIR)
	$(CC) $(CFLAGS) $< $(TARGET) -o $(BUILD_DIR)/$@


clean:
	rm -f $(OBJ) $(TARGET) $(patsubst $(TESTDIR)/%.c,$(BUILD_DIR)/%,$(wildcard $(TESTDIR)/*.c))
	rm -rf $(BUILD_DIR) $(LIB_DIR)
