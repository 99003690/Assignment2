Build : consumer_stack.c prod_con_stack.c 
	gcc consumer_stack.c prod_con_stack.c -lpthread

run : Build
	./a.out
