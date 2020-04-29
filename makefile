CFLAGS  = -std=c99
CFLAGS += -g

CFLAGS += -Wextra

CC = gcc

VFLAGS  = --quiet
VFLAGS += --tool=memcheck
VFLAGS += --leak-check=full
VFLAGS += --error-exitcode=1

run: UpperCase.c
	@$(CC) $(CFLAGS) UpperCase.c -o uppercase.out
	@./uppercase.out