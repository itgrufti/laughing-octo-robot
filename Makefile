CC=gcc
CFLAGS=-Wall

CFILES=main.c
HFILES=
OFILES=main.o
all:		OctoRobot

OctoRobot: 	$(OFILES) $(HFILES)
		$(CC) $(LDFLAGS) $(OFILES) $(LIBS) -o octo

.c.o:
		$(CC) -c  -I. $(CFLAGS) $(OPTIONS) $<
clean:
		rm -f octo $(OFILES)
install:
		cp octo /usr/bin/octo
sandwich:
		no
