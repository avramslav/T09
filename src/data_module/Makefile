

main : data_module_entry.o data_io.o
	gcc -Wall -Werror -Wextra data_module_entry.o  -o main

data_io.o: ../data_libs/data_io.c	../data_libs/data_io.h
	gcc -std=c11 -Wall -Werror -Wextra -c ../data_libs/data_io.c

data_stat.o: data_libs/data_stat.c data_libs/data_stat.h
	gcc -std=c11 -Wall -Werror -Wextra -c data_libs/data_stat.c 

data_process.o:	data_process.c data_process.h data_libs/data_stat.h
	gcc -std=c11 -Wall -Werror -Wextra -c data_process.c

data_module_enty.o: data_module_entry.c data_process.h data_libs/data_io.h
	gcc -std=c11 -Wall -Werror -Wextra -c data_module_entry.c 

clear: rm -rf *.o main