Build : client.c server.c
	gcc client.c server.c

run : Build
	./a.out