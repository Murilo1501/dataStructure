# Variables
APP = ./app
SRC = ./src
INCLUDE = ./include 
OBJ = ./obj
BIN = ./bin

# Default target
all: tad app

# Compile the linked list module
tad: | $(OBJ)
	clang -c $(SRC)/linkedList.c -I $(INCLUDE) -o $(OBJ)/linkedList.o

# Compile the main app (depends on tad)
app: tad | $(BIN)
	clang $(APP)/app.c $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/app

# Create directories if they don't exist
$(OBJ):
	mkdir -p $(OBJ)

$(BIN):
	mkdir -p $(BIN)

# Run the compiled program
run: all
	$(BIN)/app

# Clean object and binary files
clean:
	rm -f $(BIN)/* $(OBJ)/*
