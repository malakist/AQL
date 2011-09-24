CXXFLAGS?=

ifeq ($(DEBUG),y)
CXXFLAGS+=-D_DEBUG
endif

CXX?=g++
LD=$(CXX)
BISON?=bison
FLEX?=flex
BUILDDIR?=../build/

LFLAGS=$(CXXFLAGS)
FLEXFLAGS=
BISONFLAGS=

COMPILE=$(CXX) $(CXXFLAGS) -c
LINK=$(LD) $(LFLAGS)

OBJECTS=$(BUILDDIR)aql-parser.tab.o $(BUILDDIR)lex.yy.o $(BUILDDIR)aql-driver.o $(BUILDDIR)aqlc.o

.SILENT:
.PHONY: clean
	
all: $(OBJECTS)
	
aql-parser.tab.cc: aql-parser.yy
	@echo "	BISON	$<"
	$(BISON) $(BISONFLAGS) -d -o$@ $<
	
lex.yy.c: aql-parser.tab.cc aql-scanner.fl
	@echo "	FLEX	aql-scanner.fl"
	$(FLEX) $(FLEXFLAGS) -o $@ aql-scanner.fl
	
$(BUILDDIR)aql-parser.tab.o: aql-parser.tab.cc
	@echo "	CXX	$<"
	$(COMPILE) $< -o$@

$(BUILDDIR)lex.yy.o: lex.yy.c
	@echo "	CXX	$<"
	$(COMPILE) $< -o$@
	
$(BUILDDIR)aql-driver.o: aql-driver.cpp
	@echo "	CXX	$<"
	$(COMPILE) $< -o$@
	
$(BUILDDIR)aqlc.o: aqlc.cpp
	@echo "	CXX	$<"
	$(COMPILE) $< -o$@

clean:
	@echo "	CLEAN"
	rm lex.yy.c
	rm *.hh
	rm *.cc
	rm $(BUILDDIR)aql-driver.o
	rm $(BUILDDIR)aqlc.o