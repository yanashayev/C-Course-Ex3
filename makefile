FLAGS= -Wall -g

all: isort txtfind
isort: mains.o isort.o
	gcc $(FLAGS) -o isort mains.o isort.o
txtfind: maint.o txtfind.o
	gcc $(FLAGS) -o txtfind maint.o txtfind.o
mains.o: mains.c isort.h
	gcc $(FLAGS) -c mains.c
isort.o: isort.c isort.h
	gcc $(FLAGS) -c isort.c
maint.o: maint.c txtfind.h
	gcc $(FLAGS) -c maint.c
txtfind.o: txtfind.c txtfind.h
	gcc $(FLAGS) -c txtfind.c
clean:
	rm isort txtfind *.o

.PHONY: clean all mymathd mymaths
