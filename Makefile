CC = gcc
OBJ = array.c quicksort.c merge_sort.c counting_sort.c main.c

main: main.c
	${CC} ${OBJ} -o $@

clear:
	rm main
