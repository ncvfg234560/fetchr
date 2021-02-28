CC = gcc
CFLAGS = -O2 -Wall -ffast-math -pipe
TARGET = bsd.c
OUTPUT = test

all:
	$(CC) $(CFLAGS) $(TARGET) -o $(OUTPUT)

