#PLIK MAKEFILE

CC = g++
CFLAGS = -std=c++11
TARGET = box

$(TARGET): main.o box.o figure.o
	$(CC) main.o box.o figure.o -g -o $(TARGET)

main.o: main.cpp box.h
	$(CC) $(CFLAGS) -c -g main.cpp

box.o: box.cpp box.h figure.h
	$(CC) $(CFLAGS) -c -g box.cpp 

figure.o: figure.cpp figure.h
	$(CC) $(CFLAGS) -c -g figure.cpp

clean:
	rm -f *.o $(TARGET)
