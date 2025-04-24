CC = gcc
CFLAGS = -Wall -g
FLEX = flex
BISON = bison
# Output executable name
TARGET = a.out
# Source and generated files
LEX_SRC = lexer.l
YACC_SRC = parser.y
LEX_C = lex.yy.c
YACC_C = parser.tab.c
YACC_H = parser.tab.h
AST_C = ast.c
AST_H = ast.h
# Object files
OBJS = $(LEX_C) $(YACC_C) $(AST_C)
# Default target - build and run
all: build run
# Target to just build the compiler
build: $(TARGET)
# Rule to build the compiler
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ -lfl
# Rule to generate the parser
$(YACC_C) $(YACC_H): $(YACC_SRC)
	$(BISON) -d $(YACC_SRC)
# Rule to generate the lexer
$(LEX_C): $(LEX_SRC) $(YACC_H)
	$(FLEX) $(LEX_SRC)
# Rule to compile AST source file
ast.o: $(AST_C) $(AST_H)
	$(CC) $(CFLAGS) -c $<
# Run the compiler with input.txt
run: $(TARGET)
	./$(TARGET) text.txt