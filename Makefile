all:
	gcc -fPIC -c -o hello.o hello.c
	gcc -shared -o libfunc.so hello.o
	gcc -o test test.c