include ../cpu.mk

TARGETS=attacker
UTILS=util.o 

all: $(TARGETS)

$(UTILS): %.o: %.c %.h
	$(CC) $(CFLAGS) -c $<

%.o: %.c util.h
	$(CC) $(CFLAGS)  -c $< 

$(TARGETS): %:%.o util.o
	$(CC) $(CFLAGS) $^ -o $@

run_victim:
	taskset -c $(SENDER_CPU) timeout --foreground $(TIMEOUT) ./victim

run_attacker: attacker
	taskset -c $(RECEIVER_CPU) timeout --foreground $(TIMEOUT) ./attacker

.PHONY:	clean

clean:
	$(RM) *.o $(HELPERS) $(TARGETS) 
