
CC = gcc
CFLAGS = -std=gnu99 -Wall -Wextra -g 

RM = rm
RMFLAGS = -f

SRCS = src/main.c src/hot_potato.c include/queue.c

INCLUDES = include/queue.h

LIBS = -lm

OBJS = $(SRCS:.c = .o)

all: HotPotato

clean:
		$(RM) $(RMFLAGS) ./bin/*

HotPotato: $(OBJS)
		$(CC) $(CFLAGS) $(INCLUDES) -o ./bin/HotPotato $(OBJS) $(LIBS)