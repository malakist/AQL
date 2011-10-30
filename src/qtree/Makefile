.SILENT:
.PHONY: clean

CC=g++

COMPILE=$(CC) -c
LINK=$(CC)

BUILDDIR=build/

OBJECTS=$(BUILDDIR)AqlNode.o $(BUILDDIR)StringNode.o $(BUILDDIR)TreeWalker.o

all:  $(BUILDDIR)ensure-build-dir $(OBJECTS)

$(BUILDDIR)ensure-build-dir:
	@echo "Criando o diretorio $(BUILDDIR)"
	mkdir -p $(BUILDDIR)
	touch $(BUILDDIR)ensure-build-dir

$(BUILDDIR)%.o: %.cpp
	@echo " CXX	$<"
	$(COMPILE) $< -o $@
	
clean:
	rm $(BUILDDIR)*
	rmdir $(BUILDDIR)