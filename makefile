# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Source files
# List of source files
SRCS = main.c string_utils.c

# Object files
OBJS = $(SRCS:.c=.o)

# Executable
TARGET = stringtest

# Default target
all: $(TARGET)

# Compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Link object files into executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# Clean up object files and executable
clean:
	rm -f $(OBJS) $(TARGET)