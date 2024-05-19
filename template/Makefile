# Makefile for compiling main.cpp with raylib library

# Compiler
CC := g++

# Compiler flags
CFLAGS_COMMON := -Wno-enum-compare -Wno-missing-field-initializers -Wno-unused-parameter -Wfatal-errors -Wall -Wextra
CFLAGS_Version := -std=c++20
CFLAGS_Link := -ID:\\Erfan\\Git-Download\\vcpkg\\installed\\x64-windows\\include

# Combine sections into one variable
CFLAGS := $(CFLAGS_COMMON) $(CFLAGS_Version) $(CFLAGS_Link)

# Libraries
LIBS := -lraylib -lopengl32 -lgdi32 -lwinmm

# Source files
SRC := $(wildcard src/*.cpp) main.cpp

# Header files
HDR := $(wildcard lib/*.h)

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

# Will remove the overhead
.SILENT:

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