BUILDDIR=build/
ANALYZER=analyzer/
QTREE=qtree/
OBJECTS=$(BUILDDIR)aql-parser.tab.o $(BUILDDIR)lex.yy.o $(BUILDDIR)aql-driver.o $(BUILDDIR)aqlc.o \
	$(BUILDDIR)AqlNode.o $(BUILDDIR)StringNode.o $(BUILDDIR)TreeWalker.o
EXENAME=aqlc.exe
	
.SILENT:
.PHONY: analyzer qtree clean	

all: $(BUILDDIR)ensure-build-dir analyzer qtree
	@echo " CXX $(EXENAME)"
	$(CXX) $(OBJECTS) -o $(EXENAME)

$(BUILDDIR)ensure-build-dir:
	@echo " BUILDDIR	$(BUILDDIR)"
	mkdir -p $(BUILDDIR)
	touch $(BUILDDIR)ensure-build-dir

analyzer:
	@echo "Building analyzer..."
	cd $(ANALYZER); $(MAKE)
	cp $(ANALYZER)$(BUILDDIR)*.o $(BUILDDIR)
	
qtree:
	@echo "Building qtree..."
	cd $(QTREE); $(MAKE)
	cp $(QTREE)$(BUILDDIR)*.o $(BUILDDIR)
	
clean:
	@echo "	CLEAN"
	cd $(ANALYZER); $(MAKE) clean
	cd $(QTREE); $(MAKE) clean
	rm $(BUILDDIR)*
	rmdir $(BUILDDIR)