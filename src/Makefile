all: 
	bison -d parser.y
	flex lexer.l
	gcc lex.yy.c parser.tab.c -o parser

clean: 
	rm -rf lex.yy.c
	rm -rf parser.tab.c
	rm -rf parser.tab.h
	rm -rf p