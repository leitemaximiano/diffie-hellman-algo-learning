all:
	gcc -o app main.c -lm

run:
	./app

clear:
	rm app
