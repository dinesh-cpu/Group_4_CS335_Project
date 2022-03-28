# CS335 Group-4 Compiler SIT-PAIR = {C++ (source), C++ (implementation), MIPS (target)}

This is the compiler designed by group-4 for the course CS335 under Prof. Amey Karkare and Prof. Subhajit Roy at IIT Kanpur. 

## Milestone-1 (Specs)

## Milestone-2 (Scanner)

Steps to run scanner: 
```bash
$ 1. cd src
$ 2. make
$ 3. cd ..
$ 4. ./bin/lexer ./tests/test1.cpp
```

To clean the executables run:
```bash
$ make clean
```

## Milestone-3 (Parser)

Steps to run parser:
```bash
$ 1. cd src
$ 2. make all
$ 3. cd ..
$ 4. ./bin/parser ./tests/test1.cpp
```
For making .dot file for parser:
```bash 
$ bison -g -dvt parser.y
```
For making graph from .dot file:
```bash 
$ sfdp -x -Goverlap=scale -Tpdf parser.dot > parser.pdf
```
To clean all the executables:
```bash
$ make clean
```

## Milestone-4 (Semantics) 

Steps to run code:
```bash 
$ 1. cd src
$ 2. make all
$ 3. cd ..
$ 4. ./bin/parser ./tests/test1.cpp -o graph.dot
```

For making ast:
```bash
$ 1. dot -Tpdf graph.dot -o graph.pdf
```

To clear all the files:
```bash 
$ 1. make clean
```
