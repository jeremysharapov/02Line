OBJECTS= main.o draw.o display.o
CFLAGS= -Wall
CC= gcc

all: display.c main.c draw.c draw.h ml6.h display.h	
	gcc display.c main.c draw.c draw.h ml6.h display.h
	./a.out


clean:
	rm *.o *~
