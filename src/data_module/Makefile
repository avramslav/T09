

main : entry.o io.o process.o stat.o
	gcc -Wall -Werror -Wextra entry.o io.o process.o stat.o  -o main

io.o: ../data_libs/data_io.c	../data_libs/data_io.h
	gcc -std=c11 -Wall -Werror -Wextra -c ../data_libs/data_io.c -o io.o

stat.o: ../data_libs/data_stat.c ../data_libs/data_stat.h
	gcc -std=c11 -Wall -Werror -Wextra -c ../data_libs/data_stat.c -o stat.o

process.o:	data_process.c data_process.h ../data_libs/data_stat.h
	gcc -std=c11 -Wall -Werror -Wextra -c data_process.c -o process.o

entry.o: data_module_entry.c
	gcc -std=c11 -Wall -Werror -Wextra -c data_module_entry.c  -o entry.o

clear:
	rm -rf  *.o main