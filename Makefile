CC= g++
CPPFLAGS= -Wall -O2
LDFLAGS= 

PROG= PlaylistOptimizer
OBJ= main.o

.PHONY: all clean install

all: $(PROG)

$(PROG): $(OBJ)
	 $(CC) $(CPPFLAGS) $(LDFLAGS) -o $@ $(OBJ)

%.o: %.c
	 $(CC) $(CPPFLAGS) $(LDFLAGS) -c $< -o $@

clean:
	-rm -rf $(PROG) $(OBJ)

