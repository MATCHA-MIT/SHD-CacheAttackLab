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

run_victim-4:
	taskset -c $(SENDER_CPU) ./victim-4

run_victim-16:
	taskset -c $(SENDER_CPU) ./victim-16

run_attacker: attacker
	taskset -c $(RECEIVER_CPU) ./attacker

.PHONY:	clean

clean:
	$(RM) *.o $(HELPERS) $(TARGETS) 
