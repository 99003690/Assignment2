Build : User1.c User2.c
	gcc User1.c User2.c

run : Build
	./a.out