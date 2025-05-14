# Compiler and flags
CC = gcc
CFLAGS = -Wall -g

# Build targets
TARGET = compiler
LEX_OUTPUT = lex.yy.c
YACC_OUTPUT = parser.tab.c
YACC_HEADER = parser.tab.h

# Source files
SOURCES = ast.c $(LEX_OUTPUT) $(YACC_OUTPUT)
OBJECTS = $(SOURCES:.c=.o)

# Default target
all: $(TARGET)

# Linking the compiler
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^ -lfl

# Generating lexer from flex file
$(LEX_OUTPUT): main.l $(YACC_HEADER)
	flex -o $@ $<

# Generating parser from bison file
$(YACC_OUTPUT) $(YACC_HEADER): main.y
	bison -d -o $(YACC_OUTPUT) $<

# Compiling C files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Dependencies
ast.o: ast.c ast.h $(YACC_HEADER)
lex.yy.o: $(LEX_OUTPUT) $(YACC_HEADER)
parser.tab.o: $(YACC_OUTPUT) ast.h

# Clean up
clean:
	rm -f $(TARGET) $(OBJECTS) $(LEX_OUTPUT) $(YACC_OUTPUT) $(YACC_HEADER)

# Test run
test: $(TARGET)
	./$(TARGET) test.txt

# Phony targets
.PHONY: all clean test