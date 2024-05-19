# Makefile for compiling main.cpp with raylib library

# Compiler
CC := g++

# Compiler flags
CFLAGS := -Wall -Wextra -std=c++20 -ID:\\Erfan\\Git-Download\\vcpkg\\installed\\x64-windows\\include

# Libraries
LIBS := -lraylib -lopengl32 -lgdi32 -lwinmm

# Source files
SRC := $(wildcard src/*.cpp) main.cpp
#SRC := $(shell find src -name '*.cpp') main.cpp

# Header files
HDR := $(shell find lib -name '*.h')

# Output executable
OUT := main.exe

# Object files
OBJ := $(SRC:.cpp=.o)

# Build target
$(OUT): $(OBJ)
	@$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

# Compile source files
%.o: %.cpp $(HDR)
	@$(CC) $(CFLAGS) -c -o $@ $<

# Run target
run: $(OUT)
	@./$(OUT)

# Clean after running
cleanrun: $(OUT)
	@./$(OUT)
	@$(MAKE) clean

# Clean target
clean:
	@rm -f $(OUT) $(OBJ)