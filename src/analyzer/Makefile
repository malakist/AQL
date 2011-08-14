FLEX_EXE=c:\gnuwin32\bin\flex.exe
BISON_EXE=c:\gnuwin32\bin\bison.exe
OUTPUT_SOURCES=lex.yy.c y.tab.c
FLEX_INPUT=aql.flex
BISON_INPUT=aql.bison
BISON_ARGS=-y -d -v

all: clean parser

parser: flex_output
	gcc $(OUTPUT_SOURCES) -oaql_parser.exe
	
bison_output: aql.bison
	$(BISON_EXE) $(BISON_INPUT) $(BISON_ARGS)
	
flex_output: bison_output y.tab.c y.tab.h
	$(FLEX_EXE) $(FLEX_INPUT)

clean:
	del *.o
	del *.exe
	del lex.yy.c
	del y.tab.c
	del y.tab.h