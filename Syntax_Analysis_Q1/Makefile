CC = gcc
CFLAGS = -Wall -g
FLEX = flex
BISON = bison
# Output executable name
TARGET = a.out
# Source and generated files
LEX_SRC = main.l
YACC_SRC = main.y
LEX_C = lex.yy.c
YACC_C = main.tab.c
YACC_H = main.tab.h
OBJS = $(LEX_C) $(YACC_C)
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
# Run the compiler with input.txt
run: $(TARGET)
	./$(TARGET) input.txt
# Clean up generated files
clean:
	rm -f $(TARGET) $(LEX_C) $(YACC_C) $(YACC_H) *.o *~ core
# Help target
help:
	@echo "Available targets:"
	@echo " all : Build and run the compiler (default)"
	@echo " build : Only build the compiler without running"
	@echo " run : Run the compiler with input.txt"
	@echo " clean : Remove generated files"
	@echo " help : Display this help message"
.PHONY: all build run clean help