main:main.o f.o
	gcc main.o f.o -o main
main.o:main.c
	gcc -c main.c
f.o:f.c
	gcc -c f.c

clean:
	rm main *.o