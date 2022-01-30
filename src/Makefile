all: 
	flex scanner.l
	gcc lex.yy.c -o ../bin/lexer 

clean: 
	rm -rf lex.yy.c
	rm -rf ../bin/lexer