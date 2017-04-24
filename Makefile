main:main.o f.o
	gcc main.o insert_sort.o -o main
main.o:main.c
	gcc -c main.c
insert_sort.o:insert_sort.c
	gcc -c insert_sort.c

clean:
	rm main *.o
