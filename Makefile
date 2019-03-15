CFLAGS  = -std=c99
CFLAGS += -g
#CFLAGS += -Wall
CFLAGS += -Wextra
#CFLAGS += -pedantic
#CFLAGS += -Werror

CC = gcc

VFLAGS  = --quiet
VFLAGS += --tool=memcheck
VFLAGS += --leak-check=full
VFLAGS += --error-exitcode=1

test, all: tests.out
	@./tests.out

memcheck: tests.out
	@valgrind $(VFLAGS) ./tests.out
	@echo "Memory check passed"

clean:
	rm -rf *.o *.out *.out.dSYM

tests.out:  UpperCase.c test/test_upperCase.c
	@echo Compiling $@
	@$(CC) $(CFLAGS) UpperCase.c test/vendor/unity.c test/test_upperCase.c -o tests.out