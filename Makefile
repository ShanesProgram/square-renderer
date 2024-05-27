CC = gcc 
CLAGS =
SRC_DIR = source/
SOURCE = main.c
OBJ_DIR = build/
OBJECT = main.o
TARGET = main
TAR_DIR = build/

$(TAR_DIR)$(TARGET): $(OBJ_DIR)$(OBJECT)
	$(CC) -o $@ $(OBJ_DIR)$(OBJECT) 

$(OBJ_DIR)$(OBJECT): $(SRC_DIR)$(SOURCE)
	$(CC) -std=c99 -g -c $< -o $@

clean:
	rm $(OBJ_DIR)$(OBJECT)
	rm $(TAR_DIR)$(TARGET)
