final:	main.o
	gcc main.o -o main

main.o:	tic-tac-toe.c
	gcc -c tic-tac-toe.c -o main.o

clean:
	rm main.o

