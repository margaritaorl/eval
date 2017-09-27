.PHONY: main
main: test/main.o src/sqr.o 
	gcc test/main.o src/sqr.o -o main -lm
