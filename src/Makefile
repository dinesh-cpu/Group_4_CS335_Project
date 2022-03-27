all: 
	bison -d parser.y
	flex lexer.l
	g++ lex.yy.c parser.tab.c -o ../bin/parser

clean: 
	rm -rf lex.yy.c
	rm -rf parser.tab.c
	rm -rf parser.tab.h
	rm -rf ../bin/parser
	rm -rf ../*.dot
	rm -rf ../*.pdf
	rm -rf p