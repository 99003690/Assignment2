Build : consumer_stack.c prod_con_stack.c
	gcc consumer_stack.c prod_con_stack.c

run : Build
	./a.out