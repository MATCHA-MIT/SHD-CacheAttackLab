include ../cpu.mk

all: main main-visual

run: main
	@taskset -c $(SENDER_CPU) timeout --foreground $(TIMEOUT) ./main

run-visual: main-visual
	@taskset -c $(SENDER_CPU) timeout --foreground $(TIMEOUT) ./main-visual

main: main.c Makefile
	@gcc main.c -o main

main-visual: main.c Makefile
	@gcc main.c -DVISUAL -o main-visual

.PHONY: clean

clean:
	rm -f main
