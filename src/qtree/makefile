CC=g++
CC_ARGS=-c

all: clean
	$(CC) AqlNode.cpp StringNode.cpp $(CC_ARGS)

clean:
	del *.o
	del *.exe
	del *.gch

tester:
	$(CC) AqlNode.cpp tester.cpp -o tester.exe