CC=g++
BISON=C:\gnuwin32\bin\bison.exe
FLEX=C:\gnuwin32\bin\flex.exe

all: flex
	$(CC) aql-driver.cpp aql-parser.tab.cc lex.yy.c aqlc.cpp ..\qtree\AqlNode.cpp ..\qtree\StringNode.cpp -o aqlc.exe

bison: clean
	$(BISON) aql-parser.yy
	
flex: bison
	$(FLEX) aql-scanner.fl
	
clean:
	del *.tab.??
	del location.hh
	del position.hh
	del stack.hh