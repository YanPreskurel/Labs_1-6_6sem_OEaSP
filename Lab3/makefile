CC = gcc
CFLAGS = -Wall

SRC = main.c morse.c
OBJ = $(SRC:.c=.o)

TARGET = morse_filter

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

