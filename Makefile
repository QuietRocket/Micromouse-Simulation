CC = g++
SRC = $(wildcard *.cpp)
# OBJ = $(SRC:.c=.o)

exec: $(SRC)
	$(CC) $(SRC) -o main

# %.o: %.c
# 	$(CC) -c $<

