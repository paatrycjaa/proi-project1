#PLIK MAKEFILE

CC = g++
CFLAGS = -std=c++11
TARGET = box

$(TARGET): main.o box.o figure.o
	$(CC) main.o box.o figure.o -o $(TARGET)

main.o: main.cpp box.h
	$(CC) $(CFLAGS) -c main.cpp

box.o: box.cpp box.h figure.h
	$(CC) $(CFLAGS) -c box.cpp 

figure.o: figure.cpp figure.h
	$(CC) $(CFLAGS) -c figure.cpp

clean:
	rm -f *.o $(TARGET)
