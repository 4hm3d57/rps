CC = gcc


SRC = main.c

TARGET = main.exe

.PHONY: all clean run

all:$(TARGET)

$(TARGET): $(SRC)
	$(CC) $(SRC) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean: $(TARGET)
	rm -f $(TARGET)
