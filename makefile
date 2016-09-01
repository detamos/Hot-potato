CC = gcc
CFLAGS = -c -g 
WFLAGS = -Wall -Werror -Wextra

RM = rm
RMFLAGS = -f

LIBS = -lm

SRCS = src/main.c

INCLUDES = include/queue.h

OBJS = $(SRCS:.c=.o)

all: objects hpotato

clean:
		$(RM) $(RMFLAGS) hpotato

clean-objects:
		$(RM) $(RMFLAGS) src/*.o

objects: $(SRCS)
		$(CC) $(SRCS) -o $(OBJS) $(WFLAGS) $(LIBS)

hpotato: $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) $(INCLUDES) -o hpotato $(WFLAGS) $(LIBS)
