# Compiler_Yacc_Bison

for ast compiling

```
bison -d parser.y
flex lexer.l
gcc -o parser ast.c lex.yy.c parser.tab.c -lfl
./parser input.txt
```


then print the output in parser.py
text = " <here> "

```
python3 parser.py
```

Update: Added Makefile
