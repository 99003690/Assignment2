Build : shared_memory.c
	gcc shared_memory.c -lpthread

run : Build
	./a.out
