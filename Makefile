CFLAGS=-std=c99 -pedantic -Wall -Wextra -march=native -O2
LDLIBS=
BINS=args exe sum rand

.PHONY: all
all: $(BINS)

.PHONY: clean
clean:
	$(RM) -- $(BINS)
