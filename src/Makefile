# -c to take the files to linker in multiple files
all: 
	bison -d parser.y	
	flex lexer.l	
	g++ -c node.cpp -o node.o	
	g++ -c typecheck.cpp -o typecheck.o	
	g++ -c symtable.cpp -o symtable.o
	g++ lex.yy.c parser.tab.c node.o typecheck.o symtable.o -o ../bin/parser 										

clean: 
	rm -rf lex.yy.c
	rm -rf parser.tab.c
	rm -rf parser.tab.h
	rm -rf node.o
	rm -rf symtable.o
	rm -rf ../symtable_dump
	rm -rf typecheck.o
	rm -rf ../bin/parser
	rm -rf ../*.dot
	rm -rf ../*.pdf