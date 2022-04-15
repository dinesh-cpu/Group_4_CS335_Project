# -c to take the files to linker in multiple files
all: 
	bison -d parser.y	
	flex lexer.l	
	g++ -c ast.cpp -o ast.o	
	g++ -c type_checking.cpp -o type_checking.o	
	g++ -c symbol_table.cpp -o symbol_table.o
	g++ -c 3ac.cpp -o 3ac.o
	g++ lex.yy.c parser.tab.c ast.o type_checking.o symbol_table.o 3ac.o -o ../bin/parser 										

clean: 
	rm -rf lex.yy.c
	rm -rf parser.tab.c
	rm -rf parser.tab.h
	rm -rf ast.o
	rm -rf symbol_table.o
	rm -rf 3ac.o
	rm -rf ../symtable_dump
	rm -rf type_checking.o
	rm -rf ../bin/parser
	rm -rf ../*.dot
	rm -rf ../*.pdf
	rm -rf ../ir_code.txt
