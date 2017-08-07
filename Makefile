CFLAGS=-std=c99 -pedantic -Wall -Wextra -march=native -O2
LDLIBS=
BIN=args

.PHONY: all
all: $(BIN)

.PHONY: clean
clean:
	$(RM) -- $(BIN)
