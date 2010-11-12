#Cesar Vargas
#AI Fall 2010
#Soduko Project
CC=g++

CFLAGS=-c -g -Wall

all: soduko

soduko: run.o SodukoBoard.o
	$(CC) run.o SodukoBoard.o -o Soduko.exe

run.o: run.cpp
	$(CC) $(CFLAGS) run.cpp

SodukoBoard.o: SodukoBoard.cpp
	$(CC) $(CFLAGS) SodukoBoard.cpp

clean:
	rm -rf *o Soduko.exe

