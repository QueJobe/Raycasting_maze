CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c99 `sdl2-config --cflags`
LIBS = -lm `sdl2-config --libs` -lSDL2_image 

SRC_DIR = src
INC_DIR = inc

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:.c=.o)
DEPS = $(wildcard $(INC_DIR)/*.h)

TARGET = raycasting_game

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -I$(INC_DIR) -c -o $@ $<

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: clean
