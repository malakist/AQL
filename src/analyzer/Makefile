FLEX_EXE=c:\gnuwin32\bin\flex.exe
FLEX_INPUT=aql.flex
FLEX_OUTPUT=lex.yy.c
FLEX_OBJ=lex.yy.o
FLEX_ARGS=
BISON_EXE=c:\gnuwin32\bin\bison.exe
BISON_INPUT=aql.bison
BISON_ARGS=-y -d -v
BISON_OUTPUT=y.tab.c y.tab.h
BISON_OBJ=y.tab.o
AUTO_SOURCES=lex.yy.c y.tab.c y.tab.h
PARSER_EXE=aql_parser.exe
CC=g++

all: clean parser

parser: flex_output
	$(CC) $(AUTO_SOURCES) -o $(PARSER_EXE)
	
bison_output: aql.bison
	$(BISON_EXE) $(BISON_INPUT) $(BISON_ARGS)
	
flex_output: bison_output aql.flex
	$(FLEX_EXE) $(FLEX_ARGS) $(FLEX_INPUT)

clean:
	del *.o
	del *.exe
	del *.gch
	del lex.yy.c
	del lex.yy.cc
	del y.tab.c
	del y.tab.h